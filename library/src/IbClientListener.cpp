#include <IbClient.h>
#include <iostream>

void IbApiClient::IbClient::listen() {
    const time_t now = time(nullptr);
    //std::cout << static_cast<int>(m_state) << std::endl;
    switch (m_state) {
        case ConnectionState::ST_PING_ACK:
            if( m_sleepDeadline < now) {
                disconnect();
                return;
            }
        break;
        case ConnectionState::ST_IDLE:
            if( m_sleepDeadline < now) {
                m_state = ConnectionState::ST_PING;
                return;
            }
        break;
        default: ;
    }
    m_osSignal.waitForSignal();
    errno = 0;
    m_pReader->processMsgs();
}
