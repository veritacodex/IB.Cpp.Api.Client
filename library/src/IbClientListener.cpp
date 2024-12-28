#include <IbClient.h>

void IbApiClient::IbClient::listen() {
    auto const now = std::chrono::system_clock::now();
    const time_t now_t = std::chrono::system_clock::to_time_t(now);
    switch (m_state) {
        using enum ConnectionState;
        case ST_PING_ACK:
            if( m_sleepDeadline < now_t) {
                disconnect();
                return;
            }
        break;
        case ST_IDLE:
            if( m_sleepDeadline < now_t) {
                m_state = ST_PING;
                return;
            }
        break;
        default: ;
    }
    m_osSignal.waitForSignal();
    errno = 0;
    m_pReader->processMsgs();
}
