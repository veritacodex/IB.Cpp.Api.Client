#include <IbClient.h>
#include <iostream>
#include <utils/DateUtils.h>

void notificationsListener(const IbApiClient::Notification &notification) {
    const std::string at = IbApiClient::timePointToString(notification.at);
    std::string output = at + " |";
    output += " Id:" + std::to_string(notification.id);
    output += " ErrorCode:" + std::to_string(notification.errorCode);
    output += " Message:" + notification.errorString;
    output += " Json:" + notification.advancedOrderRejectJson;
    if (notification.id == -1)
        std::cerr << output << std::endl;
    else
        std::cout << output << std::endl;
}

int main() {
    IbApiClient::IbClient client;
    client.registerNotificationsListener(notificationsListener);
    client.connect("127.0.0.1", 4002, 0);
    return 0;
}
