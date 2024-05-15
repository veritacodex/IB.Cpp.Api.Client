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
            output += fmt::format("\tAccountType:{}\n", accountType);
            output += fmt::format("\tCushion:{}\n", std::to_string(cushion));
            output += fmt::format("\tLookAheadNextChange:{}\n", std::to_string(lookAheadNextChange));
            output += fmt::format("\tAccruedCash:{}\n", std::to_string(accruedCash));
            output += fmt::format("\tAvailableFunds:{}\n", std::to_string(availableFunds));
            output += fmt::format("\tBuyingPower:{}\n", std::to_string(buyingPower));
            output += fmt::format("\tEquityWithLoanValue:{}\n", std::to_string(equityWithLoanValue));
            output += fmt::format("\tExcessLiquidity:{}\n", std::to_string(excessLiquidity));
            output += fmt::format("\tFullAvailableFunds:{}\n", std::to_string(fullAvailableFunds));
            output += fmt::format("\tFullExcessLiquidity:{}\n", std::to_string(fullExcessLiquidity));
            output += fmt::format("\tFullInitMarginReq:{}\n", std::to_string(fullInitMarginReq));
            output += fmt::format("\tFullMaintMarginReq:{}\n", std::to_string(fullMaintMarginReq));
            output += fmt::format("\tGrossPositionValue:{}\n", std::to_string(grossPositionValue));
            output += fmt::format("\tInitMarginReq:{}\n", std::to_string(initMarginReq));
            output += fmt::format("\tLookAheadAvailableFunds:{}\n", std::to_string(lookAheadAvailableFunds));
            output += fmt::format("\tLookAheadExcessLiquidity:{}\n", std::to_string(lookAheadExcessLiquidity));
            output += fmt::format("\tLookAheadInitMarginReq:{}\n", std::to_string(lookAheadInitMarginReq));
            output += fmt::format("\tLookAheadMaintMarginReq:{}\n", std::to_string(lookAheadMaintMarginReq));
            output += fmt::format("\tMaintMarginReq:{}\n", std::to_string(maintMarginReq));
            output += fmt::format("\tNetLiquidation:{}\n", std::to_string(netLiquidation));
            output += fmt::format("\tTotalCashValue:{}\n", std::to_string(totalCashValue));

            return output;
        }
    };
}
#endif
