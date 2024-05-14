#include <IbClient.h>
#include <model/Notification.h>

void IbApiClient::IbClient::error(const int id, const int errorCode, const std::string &errorString,
                                  const std::string &advancedOrderRejectJson) {
    const Notification notification(id, errorCode, errorString, advancedOrderRejectJson);
    notificationsListener(notification);
}
