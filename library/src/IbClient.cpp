#include <IbClient.h>
#include <iostream>

IbApiClient::IbClient::IbClient() : m_pClient(new EClientSocket(this, &m_osSignal)) {}

IbApiClient::IbClient::~IbClient() { disconnect(); }

void IbApiClient::IbClient::connect(const char *host, int port, int clientId)
{
    std::cout << "Connecting to host: " << host << " on port:" << port << " with clientId:" << clientId << std::endl;
    bool connected = m_pClient->eConnect(host, port, clientId, m_extraAuth);

    if (connected)
    {
        std::cout << "Connected" << std::endl;
        m_pReader = std::unique_ptr<EReader>(new EReader(m_pClient, &m_osSignal));
        m_pReader->start();
    }
    else
        std::cout << "Cannot connect";
}

void IbApiClient::IbClient::disconnect() const
{
    m_pClient->eDisconnect();
}

bool IbApiClient::IbClient::isConnected() const
{
    return m_pClient->isConnected();
}
