#ifndef IBAPICLIENT_IBCLIENT_H
#define IBAPICLIENT_IBCLIENT_H

#include "../../third-party/tws-api/EWrapper.h"
#include "../../third-party/tws-api/EReaderOSSignal.h"
#include "../../third-party/tws-api/EClientSocket.h"
#include "../../third-party/tws-api/EReader.h"

#include <ConnectionState.h>

namespace IbApiClient
{
    class IbClient : public EWrapper
    {
    public:
        IbClient();
        ~IbClient();

    private:
        EReaderOSSignal m_osSignal;
        EClientSocket *const m_pClient;

        ConnectionState m_state;
        time_t m_sleepDeadline;

        OrderId m_orderId;
        std::unique_ptr<EReader> m_pReader;
        bool m_extraAuth;
        std::string m_bboExchange;
    };
}
#endif
