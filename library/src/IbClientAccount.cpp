#include <IbClient.h>
#include "model/AccountSummaryTags.h"
#include "model/AccountUpdateTags.h"
#include <utils/StringUtils.h>
#include <ranges>

void IbApiClient::IbClient::managedAccounts(const std::string &accountsList) {
    const std::vector<std::string> accounts = split(accountsList, ',');
    spdlog::get("console")->info("Managed accounts:" + accountsList);
    for (auto &id: accounts) {
        m_accounts.try_emplace(id, id);

        spdlog::get("console")->info("Account updates requested");
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
        m_accounts[account].lookAheadNextChange = value;
    else if (tag == AccountSummaryTags::AccruedCash)
        m_accounts[account].accruedCashBase = stod(value);
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
    if (key == AccountUpdateTags::AccountCode)
        m_accounts[accountName].accountCode = val;
    else if (key == AccountUpdateTags::AccountOrGroupBase && currency == "BASE")
        m_accounts[accountName].accountOrGroupBase = val;
    else if (key == AccountUpdateTags::AccountOrGroupEur && currency == "EUR")
        m_accounts[accountName].accountOrGroupEur = val;
    else if (key == AccountUpdateTags::AccountOrGroupUsd && currency == "USD")
        m_accounts[accountName].accountOrGroupUsd = val;
    else if (key == AccountUpdateTags::AccountReady)
        m_accounts[accountName].accountReady = val;
    else if (key == AccountUpdateTags::AccountType)
        m_accounts[accountName].accountType = val;
    else if (key == AccountUpdateTags::AccruedCashBase && currency == "BASE")
        m_accounts[accountName].accruedCashBase = stod(val);
    else if (key == AccountUpdateTags::AccruedCashEur && currency == "EUR")
        m_accounts[accountName].accruedCashEur = stod(val);
    else if (key == AccountUpdateTags::AccruedCashUsd && currency == "USD")
        m_accounts[accountName].accruedCashUsd = stod(val);
    else if (key == AccountUpdateTags::AccruedCashP)
        m_accounts[accountName].accruedCashP = stod(val);
    else if (key == AccountUpdateTags::AccruedDividend)
        m_accounts[accountName].accruedDividend = stod(val);
    else if (key == AccountUpdateTags::AccruedDividendP)
        m_accounts[accountName].accruedDividendP = stod(val);
    else if (key == AccountUpdateTags::AvailableFunds)
        m_accounts[accountName].availableFunds = stod(val);
    else if (key == AccountUpdateTags::AvailableFundsP)
        m_accounts[accountName].availableFundsP = stod(val);
    else if (key == AccountUpdateTags::Billable)
        m_accounts[accountName].billable = stod(val);
    else if (key == AccountUpdateTags::BillableP)
        m_accounts[accountName].billableP = stod(val);
    else if (key == AccountUpdateTags::BuyingPower)
        m_accounts[accountName].buyingPower = stod(val);
    else if (key == AccountUpdateTags::CashBalanceBase && currency == "BASE")
        m_accounts[accountName].cashBalanceBase = stod(val);
    else if (key == AccountUpdateTags::CashBalanceEur && currency == "EUR")
        m_accounts[accountName].cashBalanceEur = stod(val);
    else if (key == AccountUpdateTags::CashBalanceUsd && currency == "USD")
        m_accounts[accountName].cashBalanceUsd = stod(val);
    else if (key == AccountUpdateTags::ColumnPrioP)
        m_accounts[accountName].columnPrioP = val;
    else if (key == AccountUpdateTags::ColumnPrioS)
        m_accounts[accountName].columnPrioS = val;
    else if (key == AccountUpdateTags::CorporateBondValueBase && currency == "BASE")
        m_accounts[accountName].corporateBondValueBase = stod(val);
    else if (key == AccountUpdateTags::CorporateBondValueEur && currency == "EUR")
        m_accounts[accountName].corporateBondValueEur = stod(val);
    else if (key == AccountUpdateTags::CorporateBondValueUsd && currency == "USD")
        m_accounts[accountName].corporateBondValueUsd = stod(val);
    else if (key == AccountUpdateTags::CryptocurrencyBase && currency == "BASE")
        m_accounts[accountName].cryptocurrencyBase = stod(val);
    else if (key == AccountUpdateTags::CryptocurrencyEur && currency == "EUR")
        m_accounts[accountName].cryptocurrencyEur = stod(val);
    else if (key == AccountUpdateTags::CryptocurrencyUsd && currency == "USD")
        m_accounts[accountName].cryptocurrencyUsd = stod(val);
    else if (key == AccountUpdateTags::CurrencyBase && currency == "BASE")
        m_accounts[accountName].currencyBase = val;
    else if (key == AccountUpdateTags::CurrencyEur && currency == "EUR")
        m_accounts[accountName].currencyEur = val;
    else if (key == AccountUpdateTags::CurrencyUsd && currency == "USD")
        m_accounts[accountName].currencyUsd = val;
    else if (key == AccountUpdateTags::Cushion)
        m_accounts[accountName].cushion = stod(val);
    else if (key == AccountUpdateTags::EquityWithLoanValue)
        m_accounts[accountName].equityWithLoanValue = stod(val);
    else if (key == AccountUpdateTags::EquityWithLoanValueP)
        m_accounts[accountName].equityWithLoanValueP = stod(val);
    else if (key == AccountUpdateTags::ExcessLiquidity)
        m_accounts[accountName].excessLiquidity = stod(val);
    else if (key == AccountUpdateTags::ExcessLiquidityP)
        m_accounts[accountName].excessLiquidityP = stod(val);
    else if (key == AccountUpdateTags::ExchangeRateBase && currency == "BASE")
        m_accounts[accountName].exchangeRateBase = stod(val);
    else if (key == AccountUpdateTags::ExchangeRateEur && currency == "EUR")
        m_accounts[accountName].exchangeRateEur = stod(val);
    else if (key == AccountUpdateTags::ExchangeRateUsd && currency == "USD")
        m_accounts[accountName].exchangeRateUsd = stod(val);
    else if (key == AccountUpdateTags::FullAvailableFunds)
        m_accounts[accountName].fullAvailableFunds = stod(val);
    else if (key == AccountUpdateTags::FullAvailableFundsP)
        m_accounts[accountName].fullAvailableFundsP = stod(val);
    else if (key == AccountUpdateTags::FullExcessLiquidity)
        m_accounts[accountName].fullExcessLiquidity = stod(val);
    else if (key == AccountUpdateTags::FullExcessLiquidityP)
        m_accounts[accountName].fullExcessLiquidityP = stod(val);
    else if (key == AccountUpdateTags::FullInitMarginReq)
        m_accounts[accountName].fullInitMarginReq = stod(val);
    else if (key == AccountUpdateTags::FullInitMarginReqP)
        m_accounts[accountName].fullInitMarginReqP = stod(val);
    else if (key == AccountUpdateTags::FullMaintMarginReq)
        m_accounts[accountName].fullMaintMarginReq = stod(val);
    else if (key == AccountUpdateTags::FullMaintMarginReqP)
        m_accounts[accountName].fullMaintMarginReqP = stod(val);
    else if (key == AccountUpdateTags::FundValueBase && currency == "BASE")
        m_accounts[accountName].fundValueBase = stod(val);
    else if (key == AccountUpdateTags::FundValueEur && currency == "EUR")
        m_accounts[accountName].fundValueEur = stod(val);
    else if (key == AccountUpdateTags::FundValueUsd && currency == "USD")
        m_accounts[accountName].fundValueUsd = stod(val);
    else if (key == AccountUpdateTags::FutureOptionValueBase && currency == "BASE")
        m_accounts[accountName].futureOptionValueBase = stod(val);
    else if (key == AccountUpdateTags::FutureOptionValueEur && currency == "EUR")
        m_accounts[accountName].futureOptionValueEur = stod(val);
    else if (key == AccountUpdateTags::FutureOptionValueUsd && currency == "USD")
        m_accounts[accountName].futureOptionValueUsd = stod(val);
    else if (key == AccountUpdateTags::FuturesPNLBase && currency == "BASE")
        m_accounts[accountName].futuresPNLBase = stod(val);
    else if (key == AccountUpdateTags::FuturesPNLEur && currency == "EUR")
        m_accounts[accountName].futuresPNLEur = stod(val);
    else if (key == AccountUpdateTags::FuturesPNLUsd && currency == "USD")
        m_accounts[accountName].futuresPNLUsd = stod(val);
    else if (key == AccountUpdateTags::FxCashBalanceBase && currency == "BASE")
        m_accounts[accountName].fxCashBalanceBase = stod(val);
    else if (key == AccountUpdateTags::FxCashBalanceEur && currency == "EUR")
        m_accounts[accountName].fxCashBalanceEur = stod(val);
    else if (key == AccountUpdateTags::FxCashBalanceUsd && currency == "USD")
        m_accounts[accountName].fxCashBalanceUsd = stod(val);
    else if (key == AccountUpdateTags::GrossPositionValue)
        m_accounts[accountName].grossPositionValue = stod(val);
    else if (key == AccountUpdateTags::GrossPositionValueP)
        m_accounts[accountName].grossPositionValueP = stod(val);
    else if (key == AccountUpdateTags::Guarantee)
        m_accounts[accountName].guarantee = stod(val);
    else if (key == AccountUpdateTags::GuaranteeP)
        m_accounts[accountName].guaranteeP = stod(val);
    else if (key == AccountUpdateTags::IndianStockHaircut)
        m_accounts[accountName].indianStockHaircut = stod(val);
    else if (key == AccountUpdateTags::IndianStockHaircutP)
        m_accounts[accountName].indianStockHaircutP = stod(val);
    else if (key == AccountUpdateTags::InitMarginReq)
        m_accounts[accountName].initMarginReq = stod(val);
    else if (key == AccountUpdateTags::InitMarginReqP)
        m_accounts[accountName].initMarginReqP = stod(val);
    else if (key == AccountUpdateTags::IssuerOptionValueBase && currency == "BASE")
        m_accounts[accountName].issuerOptionValueBase = stod(val);
    else if (key == AccountUpdateTags::IssuerOptionValueEur && currency == "EUR")
        m_accounts[accountName].issuerOptionValueEur = stod(val);
    else if (key == AccountUpdateTags::IssuerOptionValueUsd && currency == "USD")
        m_accounts[accountName].issuerOptionValueUsd = stod(val);
    else if (key == AccountUpdateTags::LeverageP)
        m_accounts[accountName].leverageP = stod(val);
    else if (key == AccountUpdateTags::LeverageS)
        m_accounts[accountName].leverageS = stod(val);
    else if (key == AccountUpdateTags::LookAheadAvailableFunds)
        m_accounts[accountName].lookAheadAvailableFunds = stod(val);
    else if (key == AccountUpdateTags::LookAheadAvailableFundsP)
        m_accounts[accountName].lookAheadAvailableFundsP = stod(val);
    else if (key == AccountUpdateTags::LookAheadExcessLiquidity)
        m_accounts[accountName].lookAheadExcessLiquidity = stod(val);
    else if (key == AccountUpdateTags::LookAheadExcessLiquidityP)
        m_accounts[accountName].lookAheadExcessLiquidityP = stod(val);
    else if (key == AccountUpdateTags::LookAheadInitMarginReq)
        m_accounts[accountName].lookAheadInitMarginReq = stod(val);
    else if (key == AccountUpdateTags::LookAheadInitMarginReqP)
        m_accounts[accountName].lookAheadInitMarginReqP = stod(val);
    else if (key == AccountUpdateTags::LookAheadMaintMarginReq)
        m_accounts[accountName].lookAheadMaintMarginReq = stod(val);
    else if (key == AccountUpdateTags::LookAheadMaintMarginReqP)
        m_accounts[accountName].lookAheadMaintMarginReqP = stod(val);
    else if (key == AccountUpdateTags::LookAheadNextChange)
        m_accounts[accountName].lookAheadNextChange = val;
    else if (key == AccountUpdateTags::MaintMarginReq)
        m_accounts[accountName].maintMarginReq = stod(val);
    else if (key == AccountUpdateTags::MaintMarginReqP)
        m_accounts[accountName].maintMarginReqP = stod(val);
    else if (key == AccountUpdateTags::MoneyMarketFundValueBase && currency == "BASE")
        m_accounts[accountName].moneyMarketFundValueBase = stod(val);
    else if (key == AccountUpdateTags::MoneyMarketFundValueEur && currency == "EUR")
        m_accounts[accountName].moneyMarketFundValueEur = stod(val);
    else if (key == AccountUpdateTags::MoneyMarketFundValueUsd && currency == "USD")
        m_accounts[accountName].moneyMarketFundValueUsd = stod(val);
    else if (key == AccountUpdateTags::MutualFundValueBase && currency == "BASE")
        m_accounts[accountName].mutualFundValueBase = stod(val);
    else if (key == AccountUpdateTags::MutualFundValueEur && currency == "EUR")
        m_accounts[accountName].mutualFundValueEur = stod(val);
    else if (key == AccountUpdateTags::MutualFundValueUsd && currency == "USD")
        m_accounts[accountName].mutualFundValueUsd = stod(val);
    else if (key == AccountUpdateTags::NLVAndMarginInReview)
        m_accounts[accountName].nLVAndMarginInReview = val;
    else if (key == AccountUpdateTags::NetDividendBase && currency == "BASE")
        m_accounts[accountName].netDividendBase = stod(val);
    else if (key == AccountUpdateTags::NetDividendEur && currency == "EUR")
        m_accounts[accountName].netDividendEur = stod(val);
    else if (key == AccountUpdateTags::NetDividendUsd && currency == "USD")
        m_accounts[accountName].netDividendUsd = stod(val);
    else if (key == AccountUpdateTags::NetLiquidation)
        m_accounts[accountName].netLiquidation = stod(val);
    else if (key == AccountUpdateTags::NetLiquidationP)
        m_accounts[accountName].netLiquidationP = stod(val);
    else if (key == AccountUpdateTags::NetLiquidationByCurrencyBase && currency == "BASE")
        m_accounts[accountName].netLiquidationByCurrencyBase = stod(val);
    else if (key == AccountUpdateTags::NetLiquidationByCurrencyEur && currency == "EUR")
        m_accounts[accountName].netLiquidationByCurrencyEur = stod(val);
    else if (key == AccountUpdateTags::NetLiquidationByCurrencyUsd && currency == "USD")
        m_accounts[accountName].netLiquidationByCurrencyUsd = stod(val);
    else if (key == AccountUpdateTags::NetLiquidationUncertainty)
        m_accounts[accountName].netLiquidationUncertainty = stod(val);
    else if (key == AccountUpdateTags::OptionMarketValueBase && currency == "BASE")
        m_accounts[accountName].optionMarketValueBase = stod(val);
    else if (key == AccountUpdateTags::OptionMarketValueEur && currency == "EUR")
        m_accounts[accountName].optionMarketValueEur = stod(val);
    else if (key == AccountUpdateTags::OptionMarketValueUsd && currency == "USD")
        m_accounts[accountName].optionMarketValueUsd = stod(val);
    else if (key == AccountUpdateTags::PASharesValue)
        m_accounts[accountName].pASharesValue = stod(val);
    else if (key == AccountUpdateTags::PASharesValueP)
        m_accounts[accountName].pASharesValueP = stod(val);
    else if (key == AccountUpdateTags::PhysicalCertificateValue)
        m_accounts[accountName].physicalCertificateValue = stod(val);
    else if (key == AccountUpdateTags::PhysicalCertificateValueP)
        m_accounts[accountName].physicalCertificateValueP = stod(val);
    else if (key == AccountUpdateTags::PostExpirationExcess)
        m_accounts[accountName].postExpirationExcess = stod(val);
    else if (key == AccountUpdateTags::PostExpirationExcessP)
        m_accounts[accountName].postExpirationExcessP = stod(val);
    else if (key == AccountUpdateTags::PostExpirationMargin)
        m_accounts[accountName].postExpirationMargin = stod(val);
    else if (key == AccountUpdateTags::PostExpirationMarginP)
        m_accounts[accountName].postExpirationMarginP = stod(val);
    else if (key == AccountUpdateTags::RealCurrencyBase && currency == "BASE")
        m_accounts[accountName].realCurrencyBase = val;
    else if (key == AccountUpdateTags::RealCurrencyEur && currency == "EUR")
        m_accounts[accountName].realCurrencyEur = val;
    else if (key == AccountUpdateTags::RealCurrencyUsd && currency == "USD")
        m_accounts[accountName].realCurrencyUsd = val;
    else if (key == AccountUpdateTags::RealizedPnLBase && currency == "BASE")
        m_accounts[accountName].realizedPnLBase = stod(val);
    else if (key == AccountUpdateTags::RealizedPnLEur && currency == "EUR")
        m_accounts[accountName].realizedPnLEur = stod(val);
    else if (key == AccountUpdateTags::RealizedPnLUsd && currency == "USD")
        m_accounts[accountName].realizedPnLUsd = stod(val);
    else if (key == AccountUpdateTags::SegmentTitleP)
        m_accounts[accountName].segmentTitleP = val;
    else if (key == AccountUpdateTags::SegmentTitleS)
        m_accounts[accountName].segmentTitleS = val;
    else if (key == AccountUpdateTags::StockMarketValueBase && currency == "BASE")
        m_accounts[accountName].stockMarketValueBase = stod(val);
    else if (key == AccountUpdateTags::StockMarketValueEur && currency == "EUR")
        m_accounts[accountName].stockMarketValueEur = stod(val);
    else if (key == AccountUpdateTags::StockMarketValueUsd && currency == "USD")
        m_accounts[accountName].stockMarketValueUsd = stod(val);
    else if (key == AccountUpdateTags::TBillValueBase && currency == "BASE")
        m_accounts[accountName].tBillValueBase = stod(val);
    else if (key == AccountUpdateTags::TBillValueEur && currency == "EUR")
        m_accounts[accountName].tBillValueEur = stod(val);
    else if (key == AccountUpdateTags::TBillValueUsd && currency == "USD")
        m_accounts[accountName].tBillValueUsd = stod(val);
    else if (key == AccountUpdateTags::TBondValueBase && currency == "BASE")
        m_accounts[accountName].tBondValueBase = stod(val);
    else if (key == AccountUpdateTags::TBondValueEur && currency == "EUR")
        m_accounts[accountName].tBondValueEur = stod(val);
    else if (key == AccountUpdateTags::TBondValueUsd && currency == "USD")
        m_accounts[accountName].tBondValueUsd = stod(val);
    else if (key == AccountUpdateTags::TotalCashBalanceBase && currency == "BASE")
        m_accounts[accountName].totalCashBalanceBase = stod(val);
    else if (key == AccountUpdateTags::TotalCashBalanceEur && currency == "EUR")
        m_accounts[accountName].totalCashBalanceEur = stod(val);
    else if (key == AccountUpdateTags::TotalCashBalanceUsd && currency == "USD")
        m_accounts[accountName].totalCashBalanceUsd = stod(val);
    else if (key == AccountUpdateTags::TotalCashValue)
        m_accounts[accountName].totalCashValue = stod(val);
    else if (key == AccountUpdateTags::TotalCashValueP)
        m_accounts[accountName].totalCashValueP = stod(val);
    else if (key == AccountUpdateTags::TotalDebitCardPendingCharges)
        m_accounts[accountName].totalDebitCardPendingCharges = stod(val);
    else if (key == AccountUpdateTags::TotalDebitCardPendingChargesP)
        m_accounts[accountName].totalDebitCardPendingChargesP = stod(val);
    else if (key == AccountUpdateTags::TradingTypeS)
        m_accounts[accountName].tradingTypeS = val;
    else if (key == AccountUpdateTags::UnrealizedPnLBase && currency == "BASE")
        m_accounts[accountName].unrealizedPnLBase = stod(val);
    else if (key == AccountUpdateTags::UnrealizedPnLEur && currency == "EUR")
        m_accounts[accountName].unrealizedPnLEur = stod(val);
    else if (key == AccountUpdateTags::UnrealizedPnLUsd && currency == "USD")
        m_accounts[accountName].unrealizedPnLUsd = stod(val);
    else if (key == AccountUpdateTags::WarrantValueBase && currency == "BASE")
        m_accounts[accountName].warrantValueBase = stod(val);
    else if (key == AccountUpdateTags::WarrantValueEur && currency == "EUR")
        m_accounts[accountName].warrantValueEur = stod(val);
    else if (key == AccountUpdateTags::WarrantValueUsd && currency == "USD")
        m_accounts[accountName].warrantValueUsd = stod(val);
}
void IbApiClient::IbClient::accountSummaryEnd(int reqId) {
    m_onAccountUpdateReceiver(m_accounts);
}
void IbApiClient::IbClient::updatePortfolio(const Contract &contract, Decimal position, double marketPrice,
                                            double marketValue, double averageCost, double unrealizedPNL,
                                            double realizedPNL, const std::string &accountName) {
    // std::cerr << "Error: function updatePortfolio not implemented" << std::endl;
    // throw NotImplementedException();
}
void IbApiClient::IbClient::updateAccountTime(const std::string &timeStamp) {
    for (auto &account: m_accounts | std::ranges::views::values) {
        account.timeStamp = timeStamp;
    }
}
void IbApiClient::IbClient::accountDownloadEnd(const std::string &accountName) {
    m_onAccountUpdateReceiver(m_accounts);
}
