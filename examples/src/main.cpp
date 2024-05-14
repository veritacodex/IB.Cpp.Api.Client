#include <IbClient.h>

int main() {
    IbApiClient::IbClient client;
    client.connect("127.0.0.1", 4002, 0);
    while (client.isConnected()) {
    }
    return 0;
}
