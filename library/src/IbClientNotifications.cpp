#include <IbClient.h>
#include <iostream>

void IbApiClient::IbClient::error(int id, int errorCode, const std::string &errorString,
                                  const std::string &advancedOrderRejectJson) {
    throw std::logic_error("error function not implemented");
}
