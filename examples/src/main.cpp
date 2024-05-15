#include <IbClient.h>
#include <ranges>

void onAccountUpdateReceiver(const std::map<std::string, IbApiClient::Account, std::less<>> &accounts) {
    spdlog::get("console")->info("oooooooooo");
    for (const auto &account: accounts | std::ranges::views::values) {
        spdlog::get("console")->info(account.toString());
    }
}

int main() {
    IbApiClient::IbClient client;
    client.connect("127.0.0.1", 4002, 0);
    client.onAccountUpdate(onAccountUpdateReceiver);
    if (client.isConnected()) {
        client.requestAccountSummary();
    }
    while(client.isConnected()) {
        client.listen();
    }
    return 0;
}