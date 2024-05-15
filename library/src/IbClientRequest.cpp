#include <IbClient.h>
#include "model/AccountSummaryTags.h"
#include "model/RequestId.h"

void IbApiClient::IbClient::requestAccountSummary() const {
    spdlog::get("console")->info("Account summary requested");
    m_pClient->reqAccountSummary(RequestId::AccountRequestId, "All", AccountSummaryTags::getAllTags());
}