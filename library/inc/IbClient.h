#ifndef IBAPICLIENT_IBCLIENT_H
#define IBAPICLIENT_IBCLIENT_H

#include "../../third-party/tws-api/EClientSocket.h"
#include "../../third-party/tws-api/EReader.h"
#include "../../third-party/tws-api/EReaderOSSignal.h"
#include "../../third-party/tws-api/EWrapper.h"

#include <ConnectionState.h>

namespace IbApiClient {
    class IbClient : public EWrapper {
        public:
            IbClient();
            ~IbClient() override;

            void connect(const char *host, const int &port, const int &clientId);
            void disconnect() const;
            bool isConnected() const;
        private:
            EReaderOSSignal m_osSignal{2000};
            EClientSocket *const m_pClient;
            ConnectionState m_state{ConnectionState::ST_CONNECT};
            time_t m_sleepDeadline{0};
            OrderId m_orderId{0};
            std::unique_ptr<EReader> m_pReader;
            bool m_extraAuth{false};
            std::string m_bboExchange;
    };
}
#endif
