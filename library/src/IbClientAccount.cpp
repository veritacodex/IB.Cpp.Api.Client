#include <IbClient.h>
#include "model/AccountSummaryTags.h"
#include "utils/StringUtils.h"

void IbApiClient::IbClient::managedAccounts(const std::string &accountsList) {
    const std::vector<std::string> accounts = split(accountsList, ',');
    spdlog::get("console")->info("Managed accounts:" + accountsList);
    for (auto &id: accounts) {
        m_accounts.try_emplace(id, id);
        m_pClient->reqAccountUpdates(true, id);
    }
}
void IbApiClient::IbClient::accountSummary(int reqId, const std::string &account, const std::string &tag,
                                           const std::string &value, const std::string &currency) {
    if (tag == AccountSummaryTags::AccountType)
        m_accounts[account].accountType = value;
    else if (tag == AccountSummaryTags::Cushion)
        m_accounts[account].cushion = stod(value);
    else if (tag == AccountSummaryTags::LookAheadNextChange)
        m_accounts[account].lookAheadNextChange = stod(value);
    else if (tag == AccountSummaryTags::AccruedCash)
        m_accounts[account].accruedCash = stod(value);
    else if (tag == AccountSummaryTags::AvailableFunds)
        m_accounts[account].availableFunds = stod(value);
    else if (tag == AccountSummaryTags::BuyingPower)
        m_accounts[account].buyingPower = stod(value);
    else if (tag == AccountSummaryTags::EquityWithLoanValue)
        m_accounts[account].equityWithLoanValue = stod(value);
    else if (tag == AccountSummaryTags::ExcessLiquidity)
        m_accounts[account].excessLiquidity = stod(value);
    else if (tag == AccountSummaryTags::FullAvailableFunds)
        m_accounts[account].fullAvailableFunds = stod(value);
    else if (tag == AccountSummaryTags::FullExcessLiquidity)
        m_accounts[account].fullExcessLiquidity = stod(value);
    else if (tag == AccountSummaryTags::FullInitMarginReq)
        m_accounts[account].fullInitMarginReq = stod(value);
    else if (tag == AccountSummaryTags::FullMaintMarginReq)
        m_accounts[account].fullMaintMarginReq = stod(value);
    else if (tag == AccountSummaryTags::GrossPositionValue)
        m_accounts[account].grossPositionValue = stod(value);
    else if (tag == AccountSummaryTags::InitMarginReq)
        m_accounts[account].initMarginReq = stod(value);
    else if (tag == AccountSummaryTags::LookAheadAvailableFunds)
        m_accounts[account].lookAheadAvailableFunds = stod(value);
    else if (tag == AccountSummaryTags::LookAheadExcessLiquidity)
        m_accounts[account].lookAheadExcessLiquidity = stod(value);
    else if (tag == AccountSummaryTags::LookAheadInitMarginReq)
        m_accounts[account].lookAheadInitMarginReq = stod(value);
    else if (tag == AccountSummaryTags::LookAheadMaintMarginReq)
        m_accounts[account].lookAheadMaintMarginReq = stod(value);
    else if (tag == AccountSummaryTags::MaintMarginReq)
        m_accounts[account].maintMarginReq = stod(value);
    else if (tag == AccountSummaryTags::NetLiquidation)
        m_accounts[account].netLiquidation = stod(value);
    else if (tag == AccountSummaryTags::TotalCashValue)
        m_accounts[account].totalCashValue = stod(value);
    else {
        spdlog::get("console")->error("Account summary tag not implemented:" + tag);
    }
}
void IbApiClient::IbClient::updateAccountValue(const std::string &key, const std::string &val,
                                               const std::string &currency, const std::string &accountName) {
    const std::string output = fmt::format("key:{} val:{} accountName:{} currency;{}", key, val, accountName, currency);
    spdlog::get("console")->error(output);
}
void IbApiClient::IbClient::accountSummaryEnd(int reqId) {
    m_onAccountUpdateReceiver(m_accounts);
}
