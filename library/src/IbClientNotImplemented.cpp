#include <IbClient.h>
#include <iostream>

void IbApiClient::IbClient::tickPrice(TickerId tickerId, TickType field, double price, const TickAttrib &attrib) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickSize(TickerId tickerId, TickType field, Decimal size) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickOptionComputation(TickerId tickerId, TickType tickType, int tickAttrib,
                                                  double impliedVol, double delta, double optPrice, double pvDividend,
                                                  double gamma, double vega, double theta,
                                                  double undPrice) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickGeneric(TickerId tickerId, TickType tickType, double value) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickString(TickerId tickerId, TickType tickType, const std::string &value) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickEFP(TickerId tickerId, TickType tickType, double basisPoints,
                                    const std::string &formattedBasisPoints, double totalDividends, int holdDays,
                                    const std::string &futureLastTradeDate, double dividendImpact,
                                    double dividendsToLastTradeDate) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::orderStatus(OrderId orderId, const std::string &status, Decimal filled, Decimal remaining,
                                        double avgFillPrice, int permId, int parentId, double lastFillPrice,
                                        int clientId, const std::string &whyHeld,
                                        double mktCapPrice) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::openOrder(OrderId orderId, const Contract &, const Order &, const OrderState &) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::openOrderEnd() {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::winError(const std::string &str, int lastError) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::connectionClosed() {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::updateAccountValue(const std::string &key, const std::string &val,
                                               const std::string &currency, const std::string &accountName) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::updatePortfolio(const Contract &contract, Decimal position, double marketPrice,
                                            double marketValue, double averageCost, double unrealizedPNL,
                                            double realizedPNL, const std::string &accountName) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::updateAccountTime(const std::string &timeStamp) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::accountDownloadEnd(const std::string &accountName) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::nextValidId(OrderId orderId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::contractDetails(int reqId, const ContractDetails &contractDetails) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::bondContractDetails(int reqId, const ContractDetails &contractDetails) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::contractDetailsEnd(int reqId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::execDetails(int reqId, const Contract &contract, const Execution &execution) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::execDetailsEnd(int reqId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}

void IbApiClient::IbClient::updateMktDepth(TickerId id, int position, int operation, int side, double price,
                                           Decimal size) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::updateMktDepthL2(TickerId id, int position, const std::string &marketMaker, int operation,
                                             int side, double price, Decimal size, bool isSmartDepth) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::updateNewsBulletin(int msgId, int msgType, const std::string &newsMessage,
                                               const std::string &originExch) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::managedAccounts(const std::string &accountsList) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::receiveFA(faDataType pFaDataType, const std::string &cxml) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::historicalData(TickerId reqId, const Bar &bar) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::
historicalDataEnd(int reqId, const std::string &startDateStr, const std::string &endDateStr) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::scannerParameters(const std::string &xml) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::scannerData(int reqId, int rank, const ContractDetails &contractDetails,
                                        const std::string &distance, const std::string &benchmark,
                                        const std::string &projection,
                                        const std::string &legsStr) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::scannerDataEnd(int reqId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::realtimeBar(TickerId reqId, long time, double open, double high, double low, double close,
                                        Decimal volume, Decimal wap, int count) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::currentTime(long time) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::fundamentalData(TickerId reqId, const std::string &data) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::deltaNeutralValidation(int reqId, const DeltaNeutralContract &deltaNeutralContract) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickSnapshotEnd(int reqId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::marketDataType(TickerId reqId, int marketDataType) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::commissionReport(const CommissionReport &commissionReport) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::position(const std::string &account, const Contract &contract, Decimal position,
                                     double avgCost) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::positionEnd() {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::accountSummary(int reqId, const std::string &account, const std::string &tag,
                                           const std::string &value, const std::string &curency) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::accountSummaryEnd(int reqId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::verifyMessageAPI(const std::string &apiData) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::verifyCompleted(bool isSuccessful, const std::string &errorText) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::displayGroupList(int reqId, const std::string &groups) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::displayGroupUpdated(int reqId, const std::string &contractInfo) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::verifyAndAuthMessageAPI(const std::string &apiData, const std::string &xyzChallange) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::verifyAndAuthCompleted(bool isSuccessful, const std::string &errorText) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::connectAck() {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::positionMulti(int reqId, const std::string &account, const std::string &modelCode,
                                          const Contract &contract, Decimal pos, double avgCost) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::positionMultiEnd(int reqId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::accountUpdateMulti(int reqId, const std::string &account, const std::string &modelCode,
                                               const std::string &key, const std::string &value,
                                               const std::string &currency) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::accountUpdateMultiEnd(int reqId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::securityDefinitionOptionalParameter(int reqId, const std::string &exchange,
                                                                int underlyingConId, const std::string &tradingClass,
                                                                const std::string &multiplier,
                                                                const std::set<std::string> &expirations,
                                                                const std::set<double> &strikes) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::securityDefinitionOptionalParameterEnd(int reqId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::softDollarTiers(int reqId, const std::vector<SoftDollarTier> &tiers) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::familyCodes(const std::vector<FamilyCode> &familyCodes) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::symbolSamples(int reqId, const std::vector<ContractDescription> &contractDescriptions) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::mktDepthExchanges(const std::vector<DepthMktDataDescription> &depthMktDataDescriptions) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickNews(int tickerId, time_t timeStamp, const std::string &providerCode,
                                     const std::string &articleId, const std::string &headline,
                                     const std::string &extraData) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::smartComponents(int reqId, const SmartComponentsMap &theMap) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickReqParams(int tickerId, double minTick, const std::string &bboExchange,
                                          int snapshotPermissions) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::newsProviders(const std::vector<NewsProvider> &newsProviders) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::newsArticle(int requestId, int articleType, const std::string &articleText) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::historicalNews(int requestId, const std::string &time, const std::string &providerCode,
                                           const std::string &articleId, const std::string &headline) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::historicalNewsEnd(int requestId, bool hasMore) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::headTimestamp(int reqId, const std::string &headTimestamp) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::histogramData(int reqId, const HistogramDataVector &data) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::historicalDataUpdate(TickerId reqId, const Bar &bar) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::rerouteMktDataReq(int reqId, int conid, const std::string &exchange) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::rerouteMktDepthReq(int reqId, int conid, const std::string &exchange) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::marketRule(int marketRuleId, const std::vector<PriceIncrement> &priceIncrements) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::pnl(int reqId, double dailyPnL, double unrealizedPnL, double realizedPnL) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::pnlSingle(int reqId, Decimal pos, double dailyPnL, double unrealizedPnL, double realizedPnL,
                                      double value) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::historicalTicks(int reqId, const std::vector<HistoricalTick> &ticks, bool done) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::
historicalTicksBidAsk(int reqId, const std::vector<HistoricalTickBidAsk> &ticks, bool done) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::historicalTicksLast(int reqId, const std::vector<HistoricalTickLast> &ticks, bool done) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickByTickAllLast(int reqId, int tickType, time_t time, double price, Decimal size,
                                              const TickAttribLast &tickAttribLast, const std::string &exchange,
                                              const std::string &specialConditions) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickByTickBidAsk(int reqId, time_t time, double bidPrice, double askPrice, Decimal bidSize,
                                             Decimal askSize, const TickAttribBidAsk &tickAttribBidAsk) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::tickByTickMidPoint(int reqId, time_t time, double midPoint) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::orderBound(long long orderId, int apiClientId, int apiOrderId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::completedOrder(const Contract &contract, const Order &order, const OrderState &orderState) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::completedOrdersEnd() {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::replaceFAEnd(int reqId, const std::string &text) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::wshMetaData(int reqId, const std::string &dataJson) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::wshEventData(int reqId, const std::string &dataJson) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::historicalSchedule(int reqId, const std::string &startDateTime,
                                               const std::string &endDateTime, const std::string &timeZone,
                                               const std::vector<HistoricalSession> &sessions) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}
void IbApiClient::IbClient::userInfo(int reqId, const std::string &whiteBrandingId) {
    std::cerr << "Error: function " << __func__ << " not implemented" << std::endl;
    throw std::logic_error("Not implemented");
}