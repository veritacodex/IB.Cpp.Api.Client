#include <IbClient.h>
#include <model/Notification.h>

inline void displayNotification(const IbApiClient::Notification &notification) {
    const std::string output = fmt::format("Id:{} ErrorCode:{} Message:{} Json:{}",
                                           std::to_string(notification.id),
                                           std::to_string(notification.errorCode),
                                           notification.errorString,
                                           notification.advancedOrderRejectJson);
    if (notification.id == -1) {
        spdlog::get("console")->error(output);
    } else
        spdlog::get("console")->info(output);
}
void IbApiClient::IbClient::error(const int id, const int errorCode, const std::string &errorString,
                                  const std::string &advancedOrderRejectJson) {
    const Notification notification(id, errorCode, errorString, advancedOrderRejectJson);
    displayNotification(notification);
}
