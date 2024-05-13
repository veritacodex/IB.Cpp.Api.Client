#ifndef IBCLIENT_H
#define IBCLIENT_H

namespace IbApiClient
{
    class IbClient
    {
    public:
        IbClient() = default;
        ~IbClient() = default;
        static void methodOne();
        static void methodTwo();
    };
}
#endif // IBCLIENT_H
