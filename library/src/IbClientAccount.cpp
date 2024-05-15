#include <IbClient.h>
#include "utils/StringUtils.h"

void IbApiClient::IbClient::managedAccounts(const std::string &accountsList) {
    const std::vector<std::string> accounts = split(accountsList, ',');
    spdlog::get("console")->info("Managed accounts:" + accountsList);
    for (auto &id: accounts) {
        Accounts.insert({id, Account(id)});
    }
}

void IbApiClient::IbClient::accountSummary(int reqId, const std::string &account, const std::string &tag,
                                           const std::string &value, const std::string &curency) {
    spdlog::get("console")->info("Account summary");
}
void IbApiClient::IbClient::accountSummaryEnd(int reqId) {
    spdlog::get("console")->info("Account summary end");
}
