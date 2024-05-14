
#include <IbClient.h>
int main() {
    IbApiClient::IbClient client;
    client.connect("127.0.0.1", 4442, 0);
    return 0;
}
