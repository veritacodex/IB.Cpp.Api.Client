#include <IbClient.h>
#include <ranges>

#include "model/AccountSummaryTags.h"
#include "utils/StringUtils.h"

void IbApiClient::IbClient::managedAccounts(const std::string &accountsList) {
    const std::vector<std::string> accounts = split(accountsList, ',');
    spdlog::get("console")->info("Managed accounts:" + accountsList);
    for (auto &id: accounts) {
        Accounts.insert({id, Account(id)});
    }
}

void IbApiClient::IbClient::accountSummary(int reqId, const std::string &account, const std::string &tag,
                                           const std::string &value, const std::string &currency) {
    // if (tag == AccountSummaryTags::AccountType)
    //     Accounts[account].accountType = value;
    // else {
    //     const std::string output = "Account:" + account + " tag:" + tag + " value:" + value;
    //     spdlog::get("console")->info(output);
    // }
}
void IbApiClient::IbClient::accountSummaryEnd(int reqId) {
    for (const Account &account: Accounts | std::ranges::views::values) {
        spdlog::get("console")->info(account.toString());
    }
}
