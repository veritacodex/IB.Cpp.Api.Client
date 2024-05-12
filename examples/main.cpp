#include "IbClient.h"

int main() {

    IbApiClient::IbClient client;
    client.methodOne("a parameter");
    client.methodTwo();
    return 0;
}
