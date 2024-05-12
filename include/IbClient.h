#ifndef IBCLIENT_H
#define IBCLIENT_H

#include <string>

namespace IbApiClient
{
    class IbClient
    {
    public:
        IbClient() = default;
        ~IbClient() = default;
        void methodOne(const std::string &parameter);
        void methodTwo();
    };
}
#endif // IBCLIENT_H
