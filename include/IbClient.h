#ifndef IBCLIENT_H
#define IBCLIENT_H

#include <iostream>

namespace IbApiClient {
    class IbClient {
        public:
            IbClient() = default;
            ~IbClient() = default;
            void methodOne();
            void methodTwo();
    };
}
#endif //IBCLIENT_H
