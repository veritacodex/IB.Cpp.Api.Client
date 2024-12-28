#include <IbClient.h>
#include <ranges>

void onAccountUpdateReceived(const std::map<std::string, IbApiClient::Account, std::less<>> &accounts) {
    for (const auto &account: accounts | std::ranges::views::values) {
        spdlog::get("console")->info(account.toString());
    }
}

void onPortfolioUpdateReceived(const std::map<long, IbApiClient::Position, std::less<> > &positions) {
    for (const auto &position: positions | std::ranges::views::values) {
        spdlog::get("console")->info(position.toString());
    }
}

int main() {
    IbApiClient::IbClient client;
    client.connect("127.0.0.1", 4002, 0);
    client.onAccountUpdate(onAccountUpdateReceived);
    client.onPortfolioUpdate(onPortfolioUpdateReceived);
    while(client.isConnected()) {
        client.listen();
    }
    return 0;
}