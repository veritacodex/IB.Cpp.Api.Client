#ifndef IBAPICLIENT_NOTIFICATION_H
#define IBAPICLIENT_NOTIFICATION_H

#include <utility>
namespace IbApiClient {
    struct Notification {
        int id;
        int errorCode;
        std::string errorString;
        std::string advancedOrderRejectJson;
        Notification();
        Notification(const int &id, const int &errorCode, std::string errorString,
                     std::string advancedOrderRejectJson): id(id), errorCode(errorCode),
                                                           errorString(std::move(errorString)),
                                                           advancedOrderRejectJson(std::move(advancedOrderRejectJson)) {
        }
        ~Notification() = default;
    };
}
#endif
