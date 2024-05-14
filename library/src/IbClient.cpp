#include <IbClient.h>

IbApiClient::IbClient::IbClient() : m_pClient(new EClientSocket(this, &m_osSignal)) {}