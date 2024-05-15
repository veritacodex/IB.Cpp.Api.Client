#include <IbClient.h>

int main() {
    IbApiClient::IbClient client;
    client.connect("127.0.0.1", 4002, 0);
    if (client.isConnected()) {
        client.requestAccountSummary();
    }
    while(client.isConnected()) {
        client.listen();
    }
    return 0;
}