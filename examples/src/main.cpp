#include <IbClient.h>
#include <iostream>

void notificationsListener(const std::string &message) {
    std::cout << "Notification received: " << message << std::endl;
}

int main() {
    IbApiClient::IbClient client;
    client.registerNotificationsListener(notificationsListener);
    client.connect("127.0.0.1", 4002, 0);
    return 0;
}
