#include <IbClient.h>
#include <iostream>

void IbApiClient::IbClient::error(int id, int errorCode, const std::string &errorString,
                                  const std::string &advancedOrderRejectJson) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
