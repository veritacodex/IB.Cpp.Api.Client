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
    if (tag == AccountSummaryTags::AccountType)
        Accounts[account].accountType = value;
    else if (tag == AccountSummaryTags::Cushion)
        Accounts[account].cushion = stod(value);
    else if (tag == AccountSummaryTags::LookAheadNextChange)
        Accounts[account].lookAheadNextChange = stod(value);
    else if (tag == AccountSummaryTags::AccruedCash)
        Accounts[account].accruedCash = stod(value);
    else if (tag == AccountSummaryTags::AvailableFunds)
        Accounts[account].availableFunds = stod(value);
    else if (tag == AccountSummaryTags::BuyingPower)
        Accounts[account].buyingPower = stod(value);
    else if (tag == AccountSummaryTags::EquityWithLoanValue)
        Accounts[account].equityWithLoanValue = stod(value);
    else if (tag == AccountSummaryTags::ExcessLiquidity)
        Accounts[account].excessLiquidity = stod(value);
    else if (tag == AccountSummaryTags::FullAvailableFunds)
        Accounts[account].fullAvailableFunds = stod(value);
    else if (tag == AccountSummaryTags::FullExcessLiquidity)
        Accounts[account].fullExcessLiquidity = stod(value);
    else if (tag == AccountSummaryTags::FullInitMarginReq)
        Accounts[account].fullInitMarginReq = stod(value);
    else if (tag == AccountSummaryTags::FullMaintMarginReq)
        Accounts[account].fullMaintMarginReq = stod(value);
    else if (tag == AccountSummaryTags::GrossPositionValue)
        Accounts[account].grossPositionValue = stod(value);
    else if (tag == AccountSummaryTags::InitMarginReq)
        Accounts[account].initMarginReq = stod(value);
    else if (tag == AccountSummaryTags::LookAheadAvailableFunds)
        Accounts[account].lookAheadAvailableFunds = stod(value);
    else if (tag == AccountSummaryTags::LookAheadExcessLiquidity)
        Accounts[account].lookAheadExcessLiquidity = stod(value);
    else if (tag == AccountSummaryTags::LookAheadInitMarginReq)
        Accounts[account].lookAheadInitMarginReq = stod(value);
    else if (tag == AccountSummaryTags::LookAheadMaintMarginReq)
        Accounts[account].lookAheadMaintMarginReq = stod(value);
    else if (tag == AccountSummaryTags::MaintMarginReq)
        Accounts[account].maintMarginReq = stod(value);
    else if (tag == AccountSummaryTags::NetLiquidation)
        Accounts[account].netLiquidation = stod(value);
    else if (tag == AccountSummaryTags::TotalCashValue)
        Accounts[account].totalCashValue = stod(value);
    else {
        spdlog::get("console")->error("Account summary tag not considered:" + tag);
    }
}
void IbApiClient::IbClient::accountSummaryEnd(int reqId) {
    for (const Account &account: Accounts | std::ranges::views::values) {
        spdlog::get("console")->info(account.toString());
    }
}
