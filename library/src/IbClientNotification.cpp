#include <IbClient.h>
#include <model/Notification.h>

inline void displayNotification(const IbApiClient::Notification &notification) {
    std::string output = "Id:" + std::to_string(notification.id);
    output += " ErrorCode:" + std::to_string(notification.errorCode);
    output += " Message:" + notification.errorString;
    output += " Json:" + notification.advancedOrderRejectJson;
    if (notification.id == -1) {
        spdlog::get("stderr")->error(output);
    }
    else
        spdlog::get("console")->info(output);
}
void IbApiClient::IbClient::error(const int id, const int errorCode, const std::string &errorString,
                                  const std::string &advancedOrderRejectJson) {
    const Notification notification(id, errorCode, errorString, advancedOrderRejectJson);
    displayNotification(notification);
}