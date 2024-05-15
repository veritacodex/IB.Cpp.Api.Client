#ifndef IBAPICLIENT_ACCOUNT_H
#define IBAPICLIENT_ACCOUNT_H

#include <utility>

namespace IbApiClient {
    struct Account {
        std::string id;
        std::string accountType;
        double cushion{};
        double lookAheadNextChange{};
        double accruedCash{};
        double availableFunds{};
        double buyingPower{};
        double equityWithLoanValue{};
        double excessLiquidity{};
        double fullAvailableFunds{};
        double fullExcessLiquidity{};
        double fullInitMarginReq{};
        double fullMaintMarginReq{};
        double grossPositionValue{};
        double initMarginReq{};
        double lookAheadAvailableFunds{};
        double lookAheadExcessLiquidity{};
        double lookAheadInitMarginReq{};
        double lookAheadMaintMarginReq{};
        double maintMarginReq{};
        double netLiquidation{};
        double totalCashValue{};

        Account() = default;
        explicit Account(std::string id): id(std::move(id)) {
        }
        [[nodiscard]] std::string toString() const {
            std::string output = "Account summary (" + id + ")\n";
            output += "\tAccountType:" + accountType + "\n";
            output += "\tCushion:" + std::to_string(cushion) + "\n";
            output += "\tLookAheadNextChange:" + std::to_string(lookAheadNextChange) + "\n";
            output += "\tAccruedCash:" + std::to_string(accruedCash) + "\n";
            output += "\tAvailableFunds:" + std::to_string(availableFunds) + "\n";
            output += "\tBuyingPower:" + std::to_string(buyingPower) + "\n";
            output += "\tEquityWithLoanValue:" + std::to_string(equityWithLoanValue) + "\n";
            output += "\tExcessLiquidity:" + std::to_string(excessLiquidity) + "\n";
            output += "\tFullAvailableFunds:" + std::to_string(fullAvailableFunds) + "\n";
            output += "\tFullExcessLiquidity:" + std::to_string(fullExcessLiquidity) + "\n";
            output += "\tFullInitMarginReq:" + std::to_string(fullInitMarginReq) + "\n";
            output += "\tFullMaintMarginReq:" + std::to_string(fullMaintMarginReq) + "\n";
            output += "\tGrossPositionValue:" + std::to_string(grossPositionValue) + "\n";
            output += "\tInitMarginReq:" + std::to_string(initMarginReq) + "\n";
            output += "\tLookAheadAvailableFunds:" + std::to_string(lookAheadAvailableFunds) + "\n";
            output += "\tLookAheadExcessLiquidity:" + std::to_string(lookAheadExcessLiquidity) + "\n";
            output += "\tLookAheadInitMarginReq:" + std::to_string(lookAheadInitMarginReq) + "\n";
            output += "\tLookAheadMaintMarginReq:" + std::to_string(lookAheadMaintMarginReq) + "\n";
            output += "\tMaintMarginReq:" + std::to_string(maintMarginReq) + "\n";
            output += "\tNetLiquidation:" + std::to_string(netLiquidation) + "\n";
            output += "\tTotalCashValue:" + std::to_string(totalCashValue) + "\n";

            return output;
        }
    };
}
#endif
