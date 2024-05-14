#include <IbClient.h>

IbApiClient::IbClient::IbClient() :
      m_osSignal(2000)
    , m_pClient(new EClientSocket(this, &m_osSignal))
	, m_sleepDeadline(0)
	, m_orderId(0)
    , m_extraAuth(false)
{
    m_state = ConnectionState::ST_CONNECT;
}