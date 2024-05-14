#include <IbClient.h>
#include <iostream>
#include <source_location>
#include "NotImplementedException.h"

void IbApiClient::IbClient::tickPrice(TickerId tickerId, TickType field, double price, const TickAttrib &attrib) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickSize(TickerId tickerId, TickType field, Decimal size) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickOptionComputation(TickerId tickerId, TickType tickType, int tickAttrib,
                                                  double impliedVol, double delta, double optPrice, double pvDividend,
                                                  double gamma, double vega, double theta,
                                                  double undPrice) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickGeneric(TickerId tickerId, TickType tickType, double value) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickString(TickerId tickerId, TickType tickType, const std::string &value) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickEFP(TickerId tickerId, TickType tickType, double basisPoints,
                                    const std::string &formattedBasisPoints, double totalDividends, int holdDays,
                                    const std::string &futureLastTradeDate, double dividendImpact,
                                    double dividendsToLastTradeDate) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::orderStatus(OrderId orderId, const std::string &status, Decimal filled, Decimal remaining,
                                        double avgFillPrice, int permId, int parentId, double lastFillPrice,
                                        int clientId, const std::string &whyHeld,
                                        double mktCapPrice) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::openOrder(OrderId orderId, const Contract &, const Order &, const OrderState &) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::openOrderEnd() {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::winError(const std::string &str, int lastError) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::connectionClosed() {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::updateAccountValue(const std::string &key, const std::string &val,
                                               const std::string &currency, const std::string &accountName) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::updatePortfolio(const Contract &contract, Decimal position, double marketPrice,
                                            double marketValue, double averageCost, double unrealizedPNL,
                                            double realizedPNL, const std::string &accountName) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::updateAccountTime(const std::string &timeStamp) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::accountDownloadEnd(const std::string &accountName) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::nextValidId(OrderId orderId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::contractDetails(int reqId, const ContractDetails &contractDetails) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::bondContractDetails(int reqId, const ContractDetails &contractDetails) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::contractDetailsEnd(int reqId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::execDetails(int reqId, const Contract &contract, const Execution &execution) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::execDetailsEnd(int reqId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}

void IbApiClient::IbClient::updateMktDepth(TickerId id, int position, int operation, int side, double price,
                                           Decimal size) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::updateMktDepthL2(TickerId id, int position, const std::string &marketMaker, int operation,
                                             int side, double price, Decimal size, bool isSmartDepth) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::updateNewsBulletin(int msgId, int msgType, const std::string &newsMessage,
                                               const std::string &originExch) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::managedAccounts(const std::string &accountsList) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::receiveFA(faDataType pFaDataType, const std::string &cxml) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalData(TickerId reqId, const Bar &bar) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::
historicalDataEnd(int reqId, const std::string &startDateStr, const std::string &endDateStr) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::scannerParameters(const std::string &xml) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::scannerData(int reqId, int rank, const ContractDetails &contractDetails,
                                        const std::string &distance, const std::string &benchmark,
                                        const std::string &projection,
                                        const std::string &legsStr) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::scannerDataEnd(int reqId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::realtimeBar(TickerId reqId, long time, double open, double high, double low, double close,
                                        Decimal volume, Decimal wap, int count) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::currentTime(long time) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::fundamentalData(TickerId reqId, const std::string &data) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::deltaNeutralValidation(int reqId, const DeltaNeutralContract &deltaNeutralContract) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickSnapshotEnd(int reqId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::marketDataType(TickerId reqId, int marketDataType) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::commissionReport(const CommissionReport &commissionReport) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::position(const std::string &account, const Contract &contract, Decimal position,
                                     double avgCost) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::positionEnd() {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::accountSummary(int reqId, const std::string &account, const std::string &tag,
                                           const std::string &value, const std::string &curency) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::accountSummaryEnd(int reqId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::verifyMessageAPI(const std::string &apiData) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::verifyCompleted(bool isSuccessful, const std::string &errorText) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::displayGroupList(int reqId, const std::string &groups) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::displayGroupUpdated(int reqId, const std::string &contractInfo) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::verifyAndAuthMessageAPI(const std::string &apiData, const std::string &xyzChallange) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::verifyAndAuthCompleted(bool isSuccessful, const std::string &errorText) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::connectAck() {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::positionMulti(int reqId, const std::string &account, const std::string &modelCode,
                                          const Contract &contract, Decimal pos, double avgCost) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::positionMultiEnd(int reqId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::accountUpdateMulti(int reqId, const std::string &account, const std::string &modelCode,
                                               const std::string &key, const std::string &value,
                                               const std::string &currency) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::accountUpdateMultiEnd(int reqId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::securityDefinitionOptionalParameter(int reqId, const std::string &exchange,
                                                                int underlyingConId, const std::string &tradingClass,
                                                                const std::string &multiplier,
                                                                const std::set<std::string> &expirations,
                                                                const std::set<double> &strikes) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::securityDefinitionOptionalParameterEnd(int reqId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::softDollarTiers(int reqId, const std::vector<SoftDollarTier> &tiers) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::familyCodes(const std::vector<FamilyCode> &familyCodes) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::symbolSamples(int reqId, const std::vector<ContractDescription> &contractDescriptions) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::mktDepthExchanges(const std::vector<DepthMktDataDescription> &depthMktDataDescriptions) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickNews(int tickerId, time_t timeStamp, const std::string &providerCode,
                                     const std::string &articleId, const std::string &headline,
                                     const std::string &extraData) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::smartComponents(int reqId, const SmartComponentsMap &theMap) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickReqParams(int tickerId, double minTick, const std::string &bboExchange,
                                          int snapshotPermissions) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::newsProviders(const std::vector<NewsProvider> &newsProviders) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::newsArticle(int requestId, int articleType, const std::string &articleText) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalNews(int requestId, const std::string &time, const std::string &providerCode,
                                           const std::string &articleId, const std::string &headline) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalNewsEnd(int requestId, bool hasMore) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::headTimestamp(int reqId, const std::string &headTimestamp) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::histogramData(int reqId, const HistogramDataVector &data) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalDataUpdate(TickerId reqId, const Bar &bar) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::rerouteMktDataReq(int reqId, int conid, const std::string &exchange) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::rerouteMktDepthReq(int reqId, int conid, const std::string &exchange) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::marketRule(int marketRuleId, const std::vector<PriceIncrement> &priceIncrements) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::pnl(int reqId, double dailyPnL, double unrealizedPnL, double realizedPnL) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::pnlSingle(int reqId, Decimal pos, double dailyPnL, double unrealizedPnL, double realizedPnL,
                                      double value) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalTicks(int reqId, const std::vector<HistoricalTick> &ticks, bool done) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::
historicalTicksBidAsk(int reqId, const std::vector<HistoricalTickBidAsk> &ticks, bool done) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalTicksLast(int reqId, const std::vector<HistoricalTickLast> &ticks, bool done) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickByTickAllLast(int reqId, int tickType, time_t time, double price, Decimal size,
                                              const TickAttribLast &tickAttribLast, const std::string &exchange,
                                              const std::string &specialConditions) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickByTickBidAsk(int reqId, time_t time, double bidPrice, double askPrice, Decimal bidSize,
                                             Decimal askSize, const TickAttribBidAsk &tickAttribBidAsk) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickByTickMidPoint(int reqId, time_t time, double midPoint) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::orderBound(long long orderId, int apiClientId, int apiOrderId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::completedOrder(const Contract &contract, const Order &order, const OrderState &orderState) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::completedOrdersEnd() {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::replaceFAEnd(int reqId, const std::string &text) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::wshMetaData(int reqId, const std::string &dataJson) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::wshEventData(int reqId, const std::string &dataJson) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalSchedule(int reqId, const std::string &startDateTime,
                                               const std::string &endDateTime, const std::string &timeZone,
                                               const std::vector<HistoricalSession> &sessions) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::userInfo(int reqId, const std::string &whiteBrandingId) {
    const std::source_location location = std::source_location::current();
    std::cerr << "Error: function " << location.file_name() << " not implemented" << std::endl;
    throw NotImplementedException();
}
