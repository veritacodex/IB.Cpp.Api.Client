#ifndef IBAPICLIENT_ACCOUNT_H
#define IBAPICLIENT_ACCOUNT_H

#include <utility>

namespace IbApiClient {
    struct Account {
        std::string id;
        explicit Account(std::string id): id(std::move(id)) {
        }
    };
}
#endif
