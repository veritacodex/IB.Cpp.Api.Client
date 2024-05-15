#ifndef IBAPICLIENT_ACCOUNT_H
#define IBAPICLIENT_ACCOUNT_H

#include <utility>

namespace IbApiClient {
    struct Account {
        std::string id;
        std::string accountType;
        explicit Account(std::string id): id(std::move(id)) {
        }
        [[nodiscard]] std::string toString() const {
            std::string output = "Account summary (" + id + ")\n";
            output += "\tAccountType:" + accountType + "\n";
            return output;
        }
    };
}
#endif
