#include <IbClient.h>
#include <iostream>
#include <model/Notification.h>
#include <utils/DateUtils.h>

void IbApiClient::IbClient::error(const int id, const int errorCode, const std::string &errorString,
                                  const std::string &advancedOrderRejectJson) {
    const Notification notification(id, errorCode, errorString, advancedOrderRejectJson);
    const std::string at = timePointToString(notification.at);
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
