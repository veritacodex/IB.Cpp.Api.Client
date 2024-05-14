#include <IbClient.h>
#include <iostream>
#include <memory>

IbApiClient::IbClient::IbClient() : m_pClient(new EClientSocket(this, &m_osSignal)) {
}
IbApiClient::IbClient::~IbClient() {
    disconnect();

    if( m_pReader )
        m_pReader.reset();

    delete m_pClient;
}

void IbApiClient::IbClient::connect(const char *host, const int &port, const int &clientId) {
    std::cout << "Connecting to host: " << host << " on port:" << port << " with clientId:" << clientId << std::endl;

    if (m_pClient->eConnect(host, port, clientId, m_extraAuth)) {
        std::cout << "Connected" << std::endl;
        m_pReader = std::make_unique<EReader>(m_pClient, &m_osSignal);
        m_pReader->start();
    } else
        std::cout << "Cannot connect" << std::endl;
}

void IbApiClient::IbClient::disconnect() const {
    m_pClient->eDisconnect();
}

bool IbApiClient::IbClient::isConnected() const {
    return m_pClient->isConnected();
}
void IbApiClient::IbClient::tickPrice(TickerId tickerId, TickType field, double price, const TickAttrib &attrib) {
}
void IbApiClient::IbClient::tickSize(TickerId tickerId, TickType field, Decimal size) {
}
void IbApiClient::IbClient::tickOptionComputation(TickerId tickerId, TickType tickType, int tickAttrib,
    double impliedVol, double delta, double optPrice, double pvDividend, double gamma, double vega, double theta,
    double undPrice) {
}
void IbApiClient::IbClient::tickGeneric(TickerId tickerId, TickType tickType, double value) {
}
void IbApiClient::IbClient::tickString(TickerId tickerId, TickType tickType, const std::string &value) {
}
void IbApiClient::IbClient::tickEFP(TickerId tickerId, TickType tickType, double basisPoints,
    const std::string &formattedBasisPoints, double totalDividends, int holdDays,
    const std::string &futureLastTradeDate, double dividendImpact, double dividendsToLastTradeDate) {
}
void IbApiClient::IbClient::orderStatus(OrderId orderId, const std::string &status, Decimal filled, Decimal remaining,
    double avgFillPrice, int permId, int parentId, double lastFillPrice, int clientId, const std::string &whyHeld,
    double mktCapPrice) {
}
void IbApiClient::IbClient::openOrder(OrderId orderId, const Contract &, const Order &, const OrderState &) {
}
void IbApiClient::IbClient::openOrderEnd() {
}
void IbApiClient::IbClient::winError(const std::string &str, int lastError) {
}
void IbApiClient::IbClient::connectionClosed() {
}
void IbApiClient::IbClient::updateAccountValue(const std::string &key, const std::string &val,
    const std::string &currency, const std::string &accountName) {
}
void IbApiClient::IbClient::updatePortfolio(const Contract &contract, Decimal position, double marketPrice,
    double marketValue, double averageCost, double unrealizedPNL, double realizedPNL, const std::string &accountName) {
}
void IbApiClient::IbClient::updateAccountTime(const std::string &timeStamp) {
}
void IbApiClient::IbClient::accountDownloadEnd(const std::string &accountName) {
}
void IbApiClient::IbClient::nextValidId(OrderId orderId) {
}
void IbApiClient::IbClient::contractDetails(int reqId, const ContractDetails &contractDetails) {
}
void IbApiClient::IbClient::bondContractDetails(int reqId, const ContractDetails &contractDetails) {
}
void IbApiClient::IbClient::contractDetailsEnd(int reqId) {
}
void IbApiClient::IbClient::execDetails(int reqId, const Contract &contract, const Execution &execution) {
}
void IbApiClient::IbClient::execDetailsEnd(int reqId) {
}
void IbApiClient::IbClient::error(int id, int errorCode, const std::string &errorString,
                                  const std::string &advancedOrderRejectJson) {
    std::cout << "Notification" << std::endl;
}
void IbApiClient::IbClient::updateMktDepth(TickerId id, int position, int operation, int side, double price,
    Decimal size) {
}
void IbApiClient::IbClient::updateMktDepthL2(TickerId id, int position, const std::string &marketMaker, int operation,
    int side, double price, Decimal size, bool isSmartDepth) {
}
void IbApiClient::IbClient::updateNewsBulletin(int msgId, int msgType, const std::string &newsMessage,
    const std::string &originExch) {
}
void IbApiClient::IbClient::managedAccounts(const std::string &accountsList) {
}
void IbApiClient::IbClient::receiveFA(faDataType pFaDataType, const std::string &cxml) {
}
void IbApiClient::IbClient::historicalData(TickerId reqId, const Bar &bar) {
}
void IbApiClient::IbClient::
historicalDataEnd(int reqId, const std::string &startDateStr, const std::string &endDateStr) {
}
void IbApiClient::IbClient::scannerParameters(const std::string &xml) {
}
void IbApiClient::IbClient::scannerData(int reqId, int rank, const ContractDetails &contractDetails,
    const std::string &distance, const std::string &benchmark, const std::string &projection,
    const std::string &legsStr) {
}
void IbApiClient::IbClient::scannerDataEnd(int reqId) {
}
void IbApiClient::IbClient::realtimeBar(TickerId reqId, long time, double open, double high, double low, double close,
    Decimal volume, Decimal wap, int count) {
}
void IbApiClient::IbClient::currentTime(long time) {
}
void IbApiClient::IbClient::fundamentalData(TickerId reqId, const std::string &data) {
}
void IbApiClient::IbClient::deltaNeutralValidation(int reqId, const DeltaNeutralContract &deltaNeutralContract) {
}
void IbApiClient::IbClient::tickSnapshotEnd(int reqId) {
}
void IbApiClient::IbClient::marketDataType(TickerId reqId, int marketDataType) {
}
void IbApiClient::IbClient::commissionReport(const CommissionReport &commissionReport) {
}
void IbApiClient::IbClient::position(const std::string &account, const Contract &contract, Decimal position,
    double avgCost) {
}
void IbApiClient::IbClient::positionEnd() {
}
void IbApiClient::IbClient::accountSummary(int reqId, const std::string &account, const std::string &tag,
    const std::string &value, const std::string &curency) {
}
void IbApiClient::IbClient::accountSummaryEnd(int reqId) {
}
void IbApiClient::IbClient::verifyMessageAPI(const std::string &apiData) {
}
void IbApiClient::IbClient::verifyCompleted(bool isSuccessful, const std::string &errorText) {
}
void IbApiClient::IbClient::displayGroupList(int reqId, const std::string &groups) {
}
void IbApiClient::IbClient::displayGroupUpdated(int reqId, const std::string &contractInfo) {
}
void IbApiClient::IbClient::verifyAndAuthMessageAPI(const std::string &apiData, const std::string &xyzChallange) {
}
void IbApiClient::IbClient::verifyAndAuthCompleted(bool isSuccessful, const std::string &errorText) {
}
void IbApiClient::IbClient::connectAck() {
}
void IbApiClient::IbClient::positionMulti(int reqId, const std::string &account, const std::string &modelCode,
    const Contract &contract, Decimal pos, double avgCost) {
}
void IbApiClient::IbClient::positionMultiEnd(int reqId) {
}
void IbApiClient::IbClient::accountUpdateMulti(int reqId, const std::string &account, const std::string &modelCode,
    const std::string &key, const std::string &value, const std::string &currency) {
}
void IbApiClient::IbClient::accountUpdateMultiEnd(int reqId) {
}
void IbApiClient::IbClient::securityDefinitionOptionalParameter(int reqId, const std::string &exchange,
    int underlyingConId, const std::string &tradingClass, const std::string &multiplier,
    const std::set<std::string> &expirations, const std::set<double> &strikes) {
}
void IbApiClient::IbClient::securityDefinitionOptionalParameterEnd(int reqId) {
}
void IbApiClient::IbClient::softDollarTiers(int reqId, const std::vector<SoftDollarTier> &tiers) {
}
void IbApiClient::IbClient::familyCodes(const std::vector<FamilyCode> &familyCodes) {
}
void IbApiClient::IbClient::symbolSamples(int reqId, const std::vector<ContractDescription> &contractDescriptions) {
}
void IbApiClient::IbClient::mktDepthExchanges(const std::vector<DepthMktDataDescription> &depthMktDataDescriptions) {
}
void IbApiClient::IbClient::tickNews(int tickerId, time_t timeStamp, const std::string &providerCode,
    const std::string &articleId, const std::string &headline, const std::string &extraData) {
}
void IbApiClient::IbClient::smartComponents(int reqId, const SmartComponentsMap &theMap) {
}
void IbApiClient::IbClient::tickReqParams(int tickerId, double minTick, const std::string &bboExchange,
    int snapshotPermissions) {
}
void IbApiClient::IbClient::newsProviders(const std::vector<NewsProvider> &newsProviders) {
}
void IbApiClient::IbClient::newsArticle(int requestId, int articleType, const std::string &articleText) {
}
void IbApiClient::IbClient::historicalNews(int requestId, const std::string &time, const std::string &providerCode,
    const std::string &articleId, const std::string &headline) {
}
void IbApiClient::IbClient::historicalNewsEnd(int requestId, bool hasMore) {
}
void IbApiClient::IbClient::headTimestamp(int reqId, const std::string &headTimestamp) {
}
void IbApiClient::IbClient::histogramData(int reqId, const HistogramDataVector &data) {
}
void IbApiClient::IbClient::historicalDataUpdate(TickerId reqId, const Bar &bar) {
}
void IbApiClient::IbClient::rerouteMktDataReq(int reqId, int conid, const std::string &exchange) {
}
void IbApiClient::IbClient::rerouteMktDepthReq(int reqId, int conid, const std::string &exchange) {
}
void IbApiClient::IbClient::marketRule(int marketRuleId, const std::vector<PriceIncrement> &priceIncrements) {
}
void IbApiClient::IbClient::pnl(int reqId, double dailyPnL, double unrealizedPnL, double realizedPnL) {
}
void IbApiClient::IbClient::pnlSingle(int reqId, Decimal pos, double dailyPnL, double unrealizedPnL, double realizedPnL,
    double value) {
}
void IbApiClient::IbClient::historicalTicks(int reqId, const std::vector<HistoricalTick> &ticks, bool done) {
}
void IbApiClient::IbClient::
historicalTicksBidAsk(int reqId, const std::vector<HistoricalTickBidAsk> &ticks, bool done) {
}
void IbApiClient::IbClient::historicalTicksLast(int reqId, const std::vector<HistoricalTickLast> &ticks, bool done) {
}
void IbApiClient::IbClient::tickByTickAllLast(int reqId, int tickType, time_t time, double price, Decimal size,
    const TickAttribLast &tickAttribLast, const std::string &exchange, const std::string &specialConditions) {
}
void IbApiClient::IbClient::tickByTickBidAsk(int reqId, time_t time, double bidPrice, double askPrice, Decimal bidSize,
    Decimal askSize, const TickAttribBidAsk &tickAttribBidAsk) {
}
void IbApiClient::IbClient::tickByTickMidPoint(int reqId, time_t time, double midPoint) {
}
void IbApiClient::IbClient::orderBound(long long orderId, int apiClientId, int apiOrderId) {
}
void IbApiClient::IbClient::completedOrder(const Contract &contract, const Order &order, const OrderState &orderState) {
}
void IbApiClient::IbClient::completedOrdersEnd() {
}
void IbApiClient::IbClient::replaceFAEnd(int reqId, const std::string &text) {
}
void IbApiClient::IbClient::wshMetaData(int reqId, const std::string &dataJson) {
}
void IbApiClient::IbClient::wshEventData(int reqId, const std::string &dataJson) {
}
void IbApiClient::IbClient::historicalSchedule(int reqId, const std::string &startDateTime,
    const std::string &endDateTime, const std::string &timeZone, const std::vector<HistoricalSession> &sessions) {
}
void IbApiClient::IbClient::userInfo(int reqId, const std::string &whiteBrandingId) {
}
