#include <IbClient.h>
#include <memory>

IbApiClient::IbClient::IbClient() : m_pClient(new EClientSocket(this, &m_osSignal)) {
    console = spdlog::stdout_color_mt("console");
    err_logger = spdlog::stderr_color_mt("stderr");
}
IbApiClient::IbClient::~IbClient() {
    disconnect();

    if (m_pReader)
        m_pReader.reset();

    delete m_pClient;
}
void IbApiClient::IbClient::connect(const char *host, const int &port, const int &clientId) {
    const std::string message = "Connecting to host: " + static_cast<std::string>(host) + " on port:" + std::to_string(port) +
                                " with clientId:" + std::to_string(clientId);
    spdlog::get("console")->info(message);

    if (m_pClient->eConnect(host, port, clientId, m_extraAuth)) {
        spdlog::get("console")->info("Connected");
        m_pReader = std::make_unique<EReader>(m_pClient, &m_osSignal);
        m_pReader->start();
    } else
        spdlog::get("stderr")->info("Cannot connect");

    std::this_thread::sleep_for(std::chrono::seconds(2));
}
void IbApiClient::IbClient::disconnect() const {
    m_pClient->eDisconnect();
}
bool IbApiClient::IbClient::isConnected() const {
    return m_pClient->isConnected();
}
void IbApiClient::IbClient::connectAck() {
    spdlog::get("console")->info("starting api");
    if (!m_extraAuth && m_pClient->asyncEConnect())
        m_pClient->startApi();
}