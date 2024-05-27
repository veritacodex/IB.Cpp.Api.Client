#include <IbClient.h>
#include <memory>

IbApiClient::IbClient::IbClient() : m_pClient(new EClientSocket(this, &m_osSignal)) {
    consoleLogger = spdlog::stdout_color_mt("console");
}
void IbApiClient::IbClient::connect(const char *host, const int &port, const int &clientId) {
    const std::string message = fmt::format("Connecting to host:{} on port:{} with clientId:{}",
                                            static_cast<std::string>(host),
                                            std::to_string(port),
                                            std::to_string(clientId));
    spdlog::get("console")->info(message);

    if (m_pClient->eConnect(host, port, clientId, m_extraAuth)) {
        spdlog::get("console")->info("Connected");
        m_pReader = std::make_unique<EReader>(m_pClient, &m_osSignal);
        m_pReader->start();
    } else
        spdlog::get("console")->error("Cannot connect");

    std::this_thread::sleep_for(std::chrono::seconds(2));
}
void IbApiClient::IbClient::disconnect() const {
    m_pClient->eDisconnect();
}
bool IbApiClient::IbClient::isConnected() const {
    return m_pClient->isConnected();
}
void IbApiClient::IbClient::connectAck() {
    spdlog::get("console")->info("Starting api");
    if (!m_extraAuth && m_pClient->asyncEConnect())
        m_pClient->startApi();
}
void IbApiClient::IbClient::nextValidId(const OrderId orderId) {
    spdlog::get("console")->info("Next orderId:" + std::to_string(orderId));
    m_orderId = orderId;
}
