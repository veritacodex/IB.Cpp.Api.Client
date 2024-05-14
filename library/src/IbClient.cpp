#include <IbClient.h>
#include <iostream>
#include <memory>

IbApiClient::IbClient::IbClient() : m_pClient(new EClientSocket(this, &m_osSignal)) {
    console = spdlog::stdout_color_mt("console");
    err_logger = spdlog::stderr_color_mt("stderr");
}
IbApiClient::IbClient::~IbClient() {
    disconnect();

    if( m_pReader )
        m_pReader.reset();

    delete m_pClient;
}

void IbApiClient::IbClient::connect(const char *host, const int &port, const int &clientId) {
    std::cout << "Connecting to host: " << host << " on port:" << port << " with clientId:" << clientId << std::endl;

    if (m_pClient->eConnect(host, port, clientId, m_extraAuth)) {
        std::cout << "Connected" << std::endl;
        m_pReader = std::make_unique<EReader>(m_pClient, &m_osSignal);
        m_pReader->start();
    } else
        std::cout << "Cannot connect" << std::endl;
}

void IbApiClient::IbClient::disconnect() const {
    m_pClient->eDisconnect();
}

bool IbApiClient::IbClient::isConnected() const {
    return m_pClient->isConnected();
}

