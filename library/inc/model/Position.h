#ifndef IBAPICLIENT_POSITION_H
#define IBAPICLIENT_POSITION_H

#include <utility>

namespace IbApiClient {
    struct Position {
        Contract m_contract;
        double m_size{};
        double m_marketPrice{};
        double m_marketValue{};
        double m_averageCost{};
        double m_unrealizedPNL{};
        double m_realizedPNL{};
        std::string_view m_account{};
        Position() = default;
        explicit Position(Contract contract) : m_contract(std::move(contract)) {
        }
        void setValues(
            const double &size, const double &marketPrice, const double &marketValue,
            const double &averageCost, const double &unrealizedPnl, const double &realizedPnl,
            const std::string &account) {
            this->m_size = size;
            this->m_marketPrice = marketPrice;
            this->m_marketValue = marketValue;
            this->m_averageCost = averageCost;
            this->m_unrealizedPNL = unrealizedPnl;
            this->m_realizedPNL = realizedPnl;
            this->m_account = account;
        }

        [[nodiscard]] std::string toString() const {
            std::string output = "Position (" + std::to_string(m_contract.conId) + ")\n";
            output += fmt::format("\tAccount:{}\n", m_account);
            output += fmt::format("\tSymbol:{}\n", m_contract.symbol);
            output += fmt::format("\tSize:{}\n", m_size);
            output += fmt::format("\tMarket Price:{}\n", m_marketPrice);
            output += fmt::format("\tMarket Value:{}\n", m_marketValue);
            output += fmt::format("\tAverage Cost:{}\n", m_averageCost);
            output += fmt::format("\tUnrealized Pnl:{}\n", m_unrealizedPNL);
            output += fmt::format("\tRealized Pnl:{}\n", m_realizedPNL);
            return output;
        }
    };
}
#endif
