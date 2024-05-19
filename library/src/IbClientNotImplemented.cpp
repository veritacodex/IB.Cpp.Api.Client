#include <IbClient.h>
#include <iostream>
#include <model/NotImplementedException.h>

void IbApiClient::IbClient::tickPrice(TickerId tickerId, TickType field, double price, const TickAttrib &attrib) {
    std::cerr << "Error: function tickPrice not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickSize(TickerId tickerId, TickType field, double size) {
    std::cerr << "Error: function tickSize not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickOptionComputation(TickerId tickerId, TickType tickType, int tickAttrib,
                                                  double impliedVol, double delta, double optPrice, double pvDividend,
                                                  double gamma, double vega, double theta,
                                                  double undPrice) {
    std::cerr << "Error: function tickOptionComputation not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickGeneric(TickerId tickerId, TickType tickType, double value) {
    std::cerr << "Error: function tickGeneric not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickString(TickerId tickerId, TickType tickType, const std::string &value) {
    std::cerr << "Error: function tickString not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickEFP(TickerId tickerId, TickType tickType, double basisPoints,
                                    const std::string &formattedBasisPoints, double totalDividends, int holdDays,
                                    const std::string &futureLastTradeDate, double dividendImpact,
                                    double dividendsToLastTradeDate) {
    std::cerr << "Error: function tickEFP not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::orderStatus(OrderId orderId, const std::string &status, double filled, double remaining,
                                        double avgFillPrice, int permId, int parentId, double lastFillPrice,
                                        int clientId, const std::string &whyHeld,
                                        double mktCapPrice) {
    std::cerr << "Error: function orderStatus not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::openOrder(OrderId orderId, const Contract &, const Order &, const OrderState &) {
    std::cerr << "Error: function openOrder not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::openOrderEnd() {
    std::cerr << "Error: function openOrderEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::winError(const std::string &str, int lastError) {
    std::cerr << "Error: function winError not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::connectionClosed() {
    std::cerr << "Error: function connectionClosed not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::contractDetails(int reqId, const ContractDetails &contractDetails) {
    std::cerr << "Error: function contractDetails not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::bondContractDetails(int reqId, const ContractDetails &contractDetails) {
    std::cerr << "Error: function bondContractDetails not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::contractDetailsEnd(int reqId) {
    std::cerr << "Error: function contractDetailsEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::execDetails(int reqId, const Contract &contract, const Execution &execution) {
    std::cerr << "Error: function execDetails not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::execDetailsEnd(int reqId) {
    std::cerr << "Error: function execDetailsEnd not implemented" << std::endl;
    throw NotImplementedException();
}

void IbApiClient::IbClient::updateMktDepth(TickerId id, int position, int operation, int side, double price,
                                           double size) {
    std::cerr << "Error: function updateMktDepth not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::updateMktDepthL2(TickerId id, int position, const std::string &marketMaker, int operation,
                                             int side, double price, double size, bool isSmartDepth) {
    std::cerr << "Error: function updateMktDepthL2 not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::updateNewsBulletin(int msgId, int msgType, const std::string &newsMessage,
                                               const std::string &originExch) {
    std::cerr << "Error: function updateNewsBulletin not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::receiveFA(faDataType pFaDataType, const std::string &cxml) {
    std::cerr << "Error: function receiveFA not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalData(TickerId reqId, const Bar &bar) {
    std::cerr << "Error: function historicalData not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::
historicalDataEnd(int reqId, const std::string &startDateStr, const std::string &endDateStr) {
    std::cerr << "Error: function historicalDataEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::scannerParameters(const std::string &xml) {
    std::cerr << "Error: function scannerParameters not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::scannerData(int reqId, int rank, const ContractDetails &contractDetails,
                                        const std::string &distance, const std::string &benchmark,
                                        const std::string &projection,
                                        const std::string &legsStr) {
    std::cerr << "Error: function scannerData not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::scannerDataEnd(int reqId) {
    std::cerr << "Error: function scannerDataEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::realtimeBar(TickerId reqId, long time, double open, double high, double low, double close,
                                        double volume, double wap, int count) {
    std::cerr << "Error: function realtimeBar not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::currentTime(long time) {
    std::cerr << "Error: function currentTime not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::fundamentalData(TickerId reqId, const std::string &data) {
    std::cerr << "Error: function fundamentalData not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::deltaNeutralValidation(int reqId, const DeltaNeutralContract &deltaNeutralContract) {
    std::cerr << "Error: function deltaNeutralValidation not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickSnapshotEnd(int reqId) {
    std::cerr << "Error: function tickSnapshotEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::marketDataType(TickerId reqId, int marketDataType) {
    std::cerr << "Error: function marketDataType not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::commissionReport(const CommissionReport &commissionReport) {
    std::cerr << "Error: function commissionReport not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::position(const std::string &account, const Contract &contract, double position,
                                     double avgCost) {
    std::cerr << "Error: function position not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::positionEnd() {
    std::cerr << "Error: function positionEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::verifyMessageAPI(const std::string &apiData) {
    std::cerr << "Error: function verifyMessageAPI not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::verifyCompleted(bool isSuccessful, const std::string &errorText) {
    std::cerr << "Error: function verifyCompleted not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::displayGroupList(int reqId, const std::string &groups) {
    std::cerr << "Error: function displayGroupList not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::displayGroupUpdated(int reqId, const std::string &contractInfo) {
    std::cerr << "Error: function displayGroupUpdated not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::verifyAndAuthMessageAPI(const std::string &apiData, const std::string &xyzChallange) {
    std::cerr << "Error: function verifyAndAuthMessageAPI not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::verifyAndAuthCompleted(bool isSuccessful, const std::string &errorText) {
    std::cerr << "Error: function verifyAndAuthCompleted not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::positionMulti(int reqId, const std::string &account, const std::string &modelCode,
                                          const Contract &contract, double pos, double avgCost) {
    std::cerr << "Error: function positionMulti not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::positionMultiEnd(int reqId) {
    std::cerr << "Error: function positionMultiEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::accountUpdateMulti(int reqId, const std::string &account, const std::string &modelCode,
                                               const std::string &key, const std::string &value,
                                               const std::string &currency) {
    std::cerr << "Error: function accountUpdateMulti not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::accountUpdateMultiEnd(int reqId) {
    std::cerr << "Error: function accountUpdateMultiEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::securityDefinitionOptionalParameter(int reqId, const std::string &exchange,
                                                                int underlyingConId, const std::string &tradingClass,
                                                                const std::string &multiplier,
                                                                const std::set<std::string> &expirations,
                                                                const std::set<double> &strikes) {
    std::cerr << "Error: function securityDefinitionOptionalParameter not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::securityDefinitionOptionalParameterEnd(int reqId) {
    std::cerr << "Error: function securityDefinitionOptionalParameterEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::softDollarTiers(int reqId, const std::vector<SoftDollarTier> &tiers) {
    std::cerr << "Error: function softDollarTiers not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::familyCodes(const std::vector<FamilyCode> &familyCodes) {
    std::cerr << "Error: function familyCodes not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::symbolSamples(int reqId, const std::vector<ContractDescription> &contractDescriptions) {
    std::cerr << "Error: function symbolSamples not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::mktDepthExchanges(const std::vector<DepthMktDataDescription> &depthMktDataDescriptions) {
    std::cerr << "Error: function mktDepthExchanges not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickNews(int tickerId, time_t timeStamp, const std::string &providerCode,
                                     const std::string &articleId, const std::string &headline,
                                     const std::string &extraData) {
    std::cerr << "Error: function tickNews not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::smartComponents(int reqId, const SmartComponentsMap &theMap) {
    std::cerr << "Error: function smartComponents not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickReqParams(int tickerId, double minTick, const std::string &bboExchange,
                                          int snapshotPermissions) {
    std::cerr << "Error: function tickReqParams not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::newsProviders(const std::vector<NewsProvider> &newsProviders) {
    std::cerr << "Error: function newsProviders not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::newsArticle(int requestId, int articleType, const std::string &articleText) {
    std::cerr << "Error: function newsArticle not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalNews(int requestId, const std::string &time, const std::string &providerCode,
                                           const std::string &articleId, const std::string &headline) {
    std::cerr << "Error: function historicalNews not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalNewsEnd(int requestId, bool hasMore) {
    std::cerr << "Error: function historicalNewsEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::headTimestamp(int reqId, const std::string &headTimestamp) {
    std::cerr << "Error: function headTimestamp not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::histogramData(int reqId, const HistogramDataVector &data) {
    std::cerr << "Error: function histogramData not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalDataUpdate(TickerId reqId, const Bar &bar) {
    std::cerr << "Error: function historicalDataUpdate not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::rerouteMktDataReq(int reqId, int conid, const std::string &exchange) {
    std::cerr << "Error: function rerouteMktDataReq not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::rerouteMktDepthReq(int reqId, int conid, const std::string &exchange) {
    std::cerr << "Error: function rerouteMktDepthReq not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::marketRule(int marketRuleId, const std::vector<PriceIncrement> &priceIncrements) {
    std::cerr << "Error: function marketRule not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::pnl(int reqId, double dailyPnL, double unrealizedPnL, double realizedPnL) {
    std::cerr << "Error: function pnl not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::pnlSingle(int reqId, double pos, double dailyPnL, double unrealizedPnL, double realizedPnL,
                                      double value) {
    std::cerr << "Error: function pnlSingle not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalTicks(int reqId, const std::vector<HistoricalTick> &ticks, bool done) {
    std::cerr << "Error: function historicalTicks not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::
historicalTicksBidAsk(int reqId, const std::vector<HistoricalTickBidAsk> &ticks, bool done) {
    std::cerr << "Error: function historicalTicksBidAsk not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalTicksLast(int reqId, const std::vector<HistoricalTickLast> &ticks, bool done) {
    std::cerr << "Error: function historicalTicksLast not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickByTickAllLast(int reqId, int tickType, time_t time, double price, double size,
                                              const TickAttribLast &tickAttribLast, const std::string &exchange,
                                              const std::string &specialConditions) {
    std::cerr << "Error: function tickByTickAllLast not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickByTickBidAsk(int reqId, time_t time, double bidPrice, double askPrice, double bidSize,
                                             double askSize, const TickAttribBidAsk &tickAttribBidAsk) {
    std::cerr << "Error: function tickByTickBidAsk not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::tickByTickMidPoint(int reqId, time_t time, double midPoint) {
    std::cerr << "Error: function tickByTickMidPoint not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::orderBound(long long orderId, int apiClientId, int apiOrderId) {
    std::cerr << "Error: function orderBound not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::completedOrder(const Contract &contract, const Order &order, const OrderState &orderState) {
    std::cerr << "Error: function completedOrder not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::completedOrdersEnd() {
    std::cerr << "Error: function completedOrdersEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::replaceFAEnd(int reqId, const std::string &text) {
    std::cerr << "Error: function replaceFAEnd not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::wshMetaData(int reqId, const std::string &dataJson) {
    std::cerr << "Error: function wshMetaData not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::wshEventData(int reqId, const std::string &dataJson) {
    std::cerr << "Error: function wshEventData not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::historicalSchedule(int reqId, const std::string &startDateTime,
                                               const std::string &endDateTime, const std::string &timeZone,
                                               const std::vector<HistoricalSession> &sessions) {
    std::cerr << "Error: function historicalSchedule not implemented" << std::endl;
    throw NotImplementedException();
}
void IbApiClient::IbClient::userInfo(int reqId, const std::string &whiteBrandingId) {
    std::cerr << "Error: function userInfo not implemented" << std::endl;
    throw NotImplementedException();
}
