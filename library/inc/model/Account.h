#ifndef IBAPICLIENT_ACCOUNT_H
#define IBAPICLIENT_ACCOUNT_H

#include <utility>

namespace IbApiClient {
    struct Account {
        std::string timeStamp{};
        std::string accountCode{};
        std::string accountOrGroupBase{};
        std::string accountOrGroupEur{};
        std::string accountOrGroupUsd{};
        std::string accountReady{};
        std::string accountType{};
        double accruedCashBase{};
        double accruedCashEur{};
        double accruedCashUsd{};
        double accruedCashP{};
        double accruedDividend{};
        double accruedDividendP{};
        double availableFunds{};
        double availableFundsP{};
        double billable{};
        double billableP{};
        double buyingPower{};
        double cashBalanceBase{};
        double cashBalanceEur{};
        double cashBalanceUsd{};
        std::string columnPrioP{};
        std::string columnPrioS{};
        double corporateBondValueBase{};
        double corporateBondValueEur{};
        double corporateBondValueUsd{};
        double cryptocurrencyBase{};
        double cryptocurrencyEur{};
        double cryptocurrencyUsd{};
        std::string currencyBase{};
        std::string currencyEur{};
        std::string currencyUsd{};
        double cushion{};
        double equityWithLoanValue{};
        double equityWithLoanValueP{};
        double excessLiquidity{};
        double excessLiquidityP{};
        double exchangeRateBase{};
        double exchangeRateEur{};
        double exchangeRateUsd{};
        double fullAvailableFunds{};
        double fullAvailableFundsP{};
        double fullExcessLiquidity{};
        double fullExcessLiquidityP{};
        double fullInitMarginReq{};
        double fullInitMarginReqP{};
        double fullMaintMarginReq{};
        double fullMaintMarginReqP{};
        double fundValueBase{};
        double fundValueEur{};
        double fundValueUsd{};
        double futureOptionValueBase{};
        double futureOptionValueEur{};
        double futureOptionValueUsd{};
        double futuresPNLBase{};
        double futuresPNLEur{};
        double futuresPNLUsd{};
        double fxCashBalanceBase{};
        double fxCashBalanceEur{};
        double fxCashBalanceUsd{};
        double grossPositionValue{};
        double grossPositionValueP{};
        double guarantee{};
        double guaranteeP{};
        double indianStockHaircut{};
        double indianStockHaircutP{};
        double initMarginReq{};
        double initMarginReqP{};
        double issuerOptionValueBase{};
        double issuerOptionValueEur{};
        double issuerOptionValueUsd{};
        double leverageP{};
        double leverageS{};
        double lookAheadAvailableFunds{};
        double lookAheadAvailableFundsP{};
        double lookAheadExcessLiquidity{};
        double lookAheadExcessLiquidityP{};
        double lookAheadInitMarginReq{};
        double lookAheadInitMarginReqP{};
        double lookAheadMaintMarginReq{};
        double lookAheadMaintMarginReqP{};
        std::string lookAheadNextChange{};
        double maintMarginReq{};
        double maintMarginReqP{};
        double moneyMarketFundValueBase{};
        double moneyMarketFundValueEur{};
        double moneyMarketFundValueUsd{};
        double mutualFundValueBase{};
        double mutualFundValueEur{};
        double mutualFundValueUsd{};
        std::string nLVAndMarginInReview{};
        double netDividendBase{};
        double netDividendEur{};
        double netDividendUsd{};
        double netLiquidation{};
        double netLiquidationP{};
        double netLiquidationByCurrencyBase{};
        double netLiquidationByCurrencyEur{};
        double netLiquidationByCurrencyUsd{};
        double netLiquidationUncertainty{};
        double optionMarketValueBase{};
        double optionMarketValueEur{};
        double optionMarketValueUsd{};
        double pASharesValue{};
        double pASharesValueP{};
        double physicalCertificateValue{};
        double physicalCertificateValueP{};
        double postExpirationExcess{};
        double postExpirationExcessP{};
        double postExpirationMargin{};
        double postExpirationMarginP{};
        std::string realCurrencyBase{};
        std::string realCurrencyEur{};
        std::string realCurrencyUsd{};
        double realizedPnLBase{};
        double realizedPnLEur{};
        double realizedPnLUsd{};
        std::string segmentTitleP{};
        std::string segmentTitleS{};
        double stockMarketValueBase{};
        double stockMarketValueEur{};
        double stockMarketValueUsd{};
        double tBillValueBase{};
        double tBillValueEur{};
        double tBillValueUsd{};
        double tBondValueBase{};
        double tBondValueEur{};
        double tBondValueUsd{};
        double totalCashBalanceBase{};
        double totalCashBalanceEur{};
        double totalCashBalanceUsd{};
        double totalCashValue{};
        double totalCashValueP{};
        double totalDebitCardPendingCharges{};
        double totalDebitCardPendingChargesP{};
        std::string tradingTypeS{};
        double unrealizedPnLBase{};
        double unrealizedPnLEur{};
        double unrealizedPnLUsd{};
        double warrantValueBase{};
        double warrantValueEur{};
        double warrantValueUsd{};


        Account() = default;
        explicit Account(std::string id): accountCode(std::move(id)) {
        }
        [[nodiscard]] std::string toString() const {
            std::string output = "Account (" + accountCode + ")\n";
            output += fmt::format("TimeStamp:{}\n", timeStamp);
            output += fmt::format("AccountCode:{}\n", accountCode);
            output += fmt::format("AccountOrGroupBase:{}\n", accountOrGroupBase);
            output += fmt::format("AccountOrGroupEur:{}\n", accountOrGroupEur);
            output += fmt::format("AccountOrGroupUsd:{}\n", accountOrGroupUsd);
            output += fmt::format("AccountReady:{}\n", accountReady);
            output += fmt::format("AccountType:{}\n", accountType);
            output += fmt::format("AccruedCashBase:{}\n", std::to_string(accruedCashBase));
            output += fmt::format("AccruedCashEur:{}\n", std::to_string(accruedCashEur));
            output += fmt::format("AccruedCashUsd:{}\n", std::to_string(accruedCashUsd));
            output += fmt::format("AccruedCashP:{}\n", std::to_string(accruedCashP));
            output += fmt::format("AccruedDividend:{}\n", std::to_string(accruedDividend));
            output += fmt::format("AccruedDividendP:{}\n", std::to_string(accruedDividendP));
            output += fmt::format("AvailableFunds:{}\n", std::to_string(availableFunds));
            output += fmt::format("AvailableFundsP:{}\n", std::to_string(availableFundsP));
            output += fmt::format("Billable:{}\n", std::to_string(billable));
            output += fmt::format("BillableP:{}\n", std::to_string(billableP));
            output += fmt::format("BuyingPower:{}\n", std::to_string(buyingPower));
            output += fmt::format("CashBalanceBase:{}\n", std::to_string(cashBalanceBase));
            output += fmt::format("CashBalanceEur:{}\n", std::to_string(cashBalanceEur));
            output += fmt::format("CashBalanceUsd:{}\n", std::to_string(cashBalanceUsd));
            output += fmt::format("ColumnPrioP:{}\n", columnPrioP);
            output += fmt::format("ColumnPrioS:{}\n", columnPrioS);
            output += fmt::format("CorporateBondValueBase:{}\n", std::to_string(corporateBondValueBase));
            output += fmt::format("CorporateBondValueEur:{}\n", std::to_string(corporateBondValueEur));
            output += fmt::format("CorporateBondValueUsd:{}\n", std::to_string(corporateBondValueUsd));
            output += fmt::format("CryptocurrencyBase:{}\n", std::to_string(cryptocurrencyBase));
            output += fmt::format("CryptocurrencyEur:{}\n", std::to_string(cryptocurrencyEur));
            output += fmt::format("CryptocurrencyUsd:{}\n", std::to_string(cryptocurrencyUsd));
            output += fmt::format("CurrencyBase:{}\n", currencyBase);
            output += fmt::format("CurrencyEur:{}\n", currencyEur);
            output += fmt::format("CurrencyUsd:{}\n", currencyUsd);
            output += fmt::format("Cushion:{}\n", std::to_string(cushion));
            output += fmt::format("EquityWithLoanValue:{}\n", std::to_string(equityWithLoanValue));
            output += fmt::format("EquityWithLoanValueP:{}\n", std::to_string(equityWithLoanValueP));
            output += fmt::format("ExcessLiquidity:{}\n", std::to_string(excessLiquidity));
            output += fmt::format("ExcessLiquidityP:{}\n", std::to_string(excessLiquidityP));
            output += fmt::format("ExchangeRateBase:{}\n", std::to_string(exchangeRateBase));
            output += fmt::format("ExchangeRateEur:{}\n", std::to_string(exchangeRateEur));
            output += fmt::format("ExchangeRateUsd:{}\n", std::to_string(exchangeRateUsd));
            output += fmt::format("FullAvailableFunds:{}\n", std::to_string(fullAvailableFunds));
            output += fmt::format("FullAvailableFundsP:{}\n", std::to_string(fullAvailableFundsP));
            output += fmt::format("FullExcessLiquidity:{}\n", std::to_string(fullExcessLiquidity));
            output += fmt::format("FullExcessLiquidityP:{}\n", std::to_string(fullExcessLiquidityP));
            output += fmt::format("FullInitMarginReq:{}\n", std::to_string(fullInitMarginReq));
            output += fmt::format("FullInitMarginReqP:{}\n", std::to_string(fullInitMarginReqP));
            output += fmt::format("FullMaintMarginReq:{}\n", std::to_string(fullMaintMarginReq));
            output += fmt::format("FullMaintMarginReqP:{}\n", std::to_string(fullMaintMarginReqP));
            output += fmt::format("FundValueBase:{}\n", std::to_string(fundValueBase));
            output += fmt::format("FundValueEur:{}\n", std::to_string(fundValueEur));
            output += fmt::format("FundValueUsd:{}\n", std::to_string(fundValueUsd));
            output += fmt::format("FutureOptionValueBase:{}\n", std::to_string(futureOptionValueBase));
            output += fmt::format("FutureOptionValueEur:{}\n", std::to_string(futureOptionValueEur));
            output += fmt::format("FutureOptionValueUsd:{}\n", std::to_string(futureOptionValueUsd));
            output += fmt::format("FuturesPNLBase:{}\n", std::to_string(futuresPNLBase));
            output += fmt::format("FuturesPNLEur:{}\n", std::to_string(futuresPNLEur));
            output += fmt::format("FuturesPNLUsd:{}\n", std::to_string(futuresPNLUsd));
            output += fmt::format("FxCashBalanceBase:{}\n", std::to_string(fxCashBalanceBase));
            output += fmt::format("FxCashBalanceEur:{}\n", std::to_string(fxCashBalanceEur));
            output += fmt::format("FxCashBalanceUsd:{}\n", std::to_string(fxCashBalanceUsd));
            output += fmt::format("GrossPositionValue:{}\n", std::to_string(grossPositionValue));
            output += fmt::format("GrossPositionValueP:{}\n", std::to_string(grossPositionValueP));
            output += fmt::format("Guarantee:{}\n", std::to_string(guarantee));
            output += fmt::format("GuaranteeP:{}\n", std::to_string(guaranteeP));
            output += fmt::format("IndianStockHaircut:{}\n", std::to_string(indianStockHaircut));
            output += fmt::format("IndianStockHaircutP:{}\n", std::to_string(indianStockHaircutP));
            output += fmt::format("InitMarginReq:{}\n", std::to_string(initMarginReq));
            output += fmt::format("InitMarginReqP:{}\n", std::to_string(initMarginReqP));
            output += fmt::format("IssuerOptionValueBase:{}\n", std::to_string(issuerOptionValueBase));
            output += fmt::format("IssuerOptionValueEur:{}\n", std::to_string(issuerOptionValueEur));
            output += fmt::format("IssuerOptionValueUsd:{}\n", std::to_string(issuerOptionValueUsd));
            output += fmt::format("LeverageP:{}\n", std::to_string(leverageP));
            output += fmt::format("LeverageS:{}\n", std::to_string(leverageS));
            output += fmt::format("LookAheadAvailableFunds:{}\n", std::to_string(lookAheadAvailableFunds));
            output += fmt::format("LookAheadAvailableFundsP:{}\n", std::to_string(lookAheadAvailableFundsP));
            output += fmt::format("LookAheadExcessLiquidity:{}\n", std::to_string(lookAheadExcessLiquidity));
            output += fmt::format("LookAheadExcessLiquidityP:{}\n", std::to_string(lookAheadExcessLiquidityP));
            output += fmt::format("LookAheadInitMarginReq:{}\n", std::to_string(lookAheadInitMarginReq));
            output += fmt::format("LookAheadInitMarginReqP:{}\n", std::to_string(lookAheadInitMarginReqP));
            output += fmt::format("LookAheadMaintMarginReq:{}\n", std::to_string(lookAheadMaintMarginReq));
            output += fmt::format("LookAheadMaintMarginReqP:{}\n", std::to_string(lookAheadMaintMarginReqP));
            output += fmt::format("LookAheadNextChange:{}\n", lookAheadNextChange);
            output += fmt::format("MaintMarginReq:{}\n", std::to_string(maintMarginReq));
            output += fmt::format("MaintMarginReqP:{}\n", std::to_string(maintMarginReqP));
            output += fmt::format("MoneyMarketFundValueBase:{}\n", std::to_string(moneyMarketFundValueBase));
            output += fmt::format("MoneyMarketFundValueEur:{}\n", std::to_string(moneyMarketFundValueEur));
            output += fmt::format("MoneyMarketFundValueUsd:{}\n", std::to_string(moneyMarketFundValueUsd));
            output += fmt::format("MutualFundValueBase:{}\n", std::to_string(mutualFundValueBase));
            output += fmt::format("MutualFundValueEur:{}\n", std::to_string(mutualFundValueEur));
            output += fmt::format("MutualFundValueUsd:{}\n", std::to_string(mutualFundValueUsd));
            output += fmt::format("NLVAndMarginInReview:{}\n", nLVAndMarginInReview);
            output += fmt::format("NetDividendBase:{}\n", std::to_string(netDividendBase));
            output += fmt::format("NetDividendEur:{}\n", std::to_string(netDividendEur));
            output += fmt::format("NetDividendUsd:{}\n", std::to_string(netDividendUsd));
            output += fmt::format("NetLiquidation:{}\n", std::to_string(netLiquidation));
            output += fmt::format("NetLiquidationP:{}\n", std::to_string(netLiquidationP));
            output += fmt::format("NetLiquidationByCurrencyBase:{}\n", std::to_string(netLiquidationByCurrencyBase));
            output += fmt::format("NetLiquidationByCurrencyEur:{}\n", std::to_string(netLiquidationByCurrencyEur));
            output += fmt::format("NetLiquidationByCurrencyUsd:{}\n", std::to_string(netLiquidationByCurrencyUsd));
            output += fmt::format("NetLiquidationUncertainty:{}\n", std::to_string(netLiquidationUncertainty));
            output += fmt::format("OptionMarketValueBase:{}\n", std::to_string(optionMarketValueBase));
            output += fmt::format("OptionMarketValueEur:{}\n", std::to_string(optionMarketValueEur));
            output += fmt::format("OptionMarketValueUsd:{}\n", std::to_string(optionMarketValueUsd));
            output += fmt::format("PASharesValue:{}\n", std::to_string(pASharesValue));
            output += fmt::format("PASharesValueP:{}\n", std::to_string(pASharesValueP));
            output += fmt::format("PhysicalCertificateValue:{}\n", std::to_string(physicalCertificateValue));
            output += fmt::format("PhysicalCertificateValueP:{}\n", std::to_string(physicalCertificateValueP));
            output += fmt::format("PostExpirationExcess:{}\n", std::to_string(postExpirationExcess));
            output += fmt::format("PostExpirationExcessP:{}\n", std::to_string(postExpirationExcessP));
            output += fmt::format("PostExpirationMargin:{}\n", std::to_string(postExpirationMargin));
            output += fmt::format("PostExpirationMarginP:{}\n", std::to_string(postExpirationMarginP));
            output += fmt::format("RealCurrencyBase:{}\n", realCurrencyBase);
            output += fmt::format("RealCurrencyEur:{}\n", realCurrencyEur);
            output += fmt::format("RealCurrencyUsd:{}\n", realCurrencyUsd);
            output += fmt::format("RealizedPnLBase:{}\n", std::to_string(realizedPnLBase));
            output += fmt::format("RealizedPnLEur:{}\n", std::to_string(realizedPnLEur));
            output += fmt::format("RealizedPnLUsd:{}\n", std::to_string(realizedPnLUsd));
            output += fmt::format("SegmentTitleP:{}\n", segmentTitleP);
            output += fmt::format("SegmentTitleS:{}\n", segmentTitleS);
            output += fmt::format("StockMarketValueBase:{}\n", std::to_string(stockMarketValueBase));
            output += fmt::format("StockMarketValueEur:{}\n", std::to_string(stockMarketValueEur));
            output += fmt::format("StockMarketValueUsd:{}\n", std::to_string(stockMarketValueUsd));
            output += fmt::format("TBillValueBase:{}\n", std::to_string(tBillValueBase));
            output += fmt::format("TBillValueEur:{}\n", std::to_string(tBillValueEur));
            output += fmt::format("TBillValueUsd:{}\n", std::to_string(tBillValueUsd));
            output += fmt::format("TBondValueBase:{}\n", std::to_string(tBondValueBase));
            output += fmt::format("TBondValueEur:{}\n", std::to_string(tBondValueEur));
            output += fmt::format("TBondValueUsd:{}\n", std::to_string(tBondValueUsd));
            output += fmt::format("TotalCashBalanceBase:{}\n", std::to_string(totalCashBalanceBase));
            output += fmt::format("TotalCashBalanceEur:{}\n", std::to_string(totalCashBalanceEur));
            output += fmt::format("TotalCashBalanceUsd:{}\n", std::to_string(totalCashBalanceUsd));
            output += fmt::format("TotalCashValue:{}\n", std::to_string(totalCashValue));
            output += fmt::format("TotalCashValueP:{}\n", std::to_string(totalCashValueP));
            output += fmt::format("TotalDebitCardPendingCharges:{}\n", std::to_string(totalDebitCardPendingCharges));
            output += fmt::format("TotalDebitCardPendingChargesP:{}\n", std::to_string(totalDebitCardPendingChargesP));
            output += fmt::format("TradingTypeS:{}\n", tradingTypeS);
            output += fmt::format("UnrealizedPnLBase:{}\n", std::to_string(unrealizedPnLBase));
            output += fmt::format("UnrealizedPnLEur:{}\n", std::to_string(unrealizedPnLEur));
            output += fmt::format("UnrealizedPnLUsd:{}\n", std::to_string(unrealizedPnLUsd));
            output += fmt::format("WarrantValueBase:{}\n", std::to_string(warrantValueBase));
            output += fmt::format("WarrantValueEur:{}\n", std::to_string(warrantValueEur));
            output += fmt::format("WarrantValueUsd:{}\n", std::to_string(warrantValueUsd));

            return output;
        }
    };
}
#endif
