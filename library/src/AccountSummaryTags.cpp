#include <model/AccountSummaryTags.h>

std::string IbApiClient::AccountSummaryTags::AccountType = "AccountType";
std::string IbApiClient::AccountSummaryTags::NetLiquidation = "NetLiquidation";
std::string IbApiClient::AccountSummaryTags::TotalCashValue = "TotalCashValue";
std::string IbApiClient::AccountSummaryTags::SettledCash = "SettledCash";
std::string IbApiClient::AccountSummaryTags::AccruedCash = "AccruedCash";
std::string IbApiClient::AccountSummaryTags::BuyingPower = "BuyingPower";
std::string IbApiClient::AccountSummaryTags::EquityWithLoanValue = "EquityWithLoanValue";
std::string IbApiClient::AccountSummaryTags::PreviousEquityWithLoanValue = "PreviousEquityWithLoanValue";
std::string IbApiClient::AccountSummaryTags::GrossPositionValue = "GrossPositionValue";
std::string IbApiClient::AccountSummaryTags::ReqTEquity = "ReqTEquity";
std::string IbApiClient::AccountSummaryTags::ReqTMargin = "ReqTMargin";
std::string IbApiClient::AccountSummaryTags::SMA = "SMA";
std::string IbApiClient::AccountSummaryTags::InitMarginReq = "InitMarginReq";
std::string IbApiClient::AccountSummaryTags::MaintMarginReq = "MaintMarginReq";
std::string IbApiClient::AccountSummaryTags::AvailableFunds = "AvailableFunds";
std::string IbApiClient::AccountSummaryTags::ExcessLiquidity = "ExcessLiquidity";
std::string IbApiClient::AccountSummaryTags::Cushion = "Cushion";
std::string IbApiClient::AccountSummaryTags::FullInitMarginReq = "FullInitMarginReq";
std::string IbApiClient::AccountSummaryTags::FullMaintMarginReq = "FullMaintMarginReq";
std::string IbApiClient::AccountSummaryTags::FullAvailableFunds = "FullAvailableFunds";
std::string IbApiClient::AccountSummaryTags::FullExcessLiquidity = "FullExcessLiquidity";
std::string IbApiClient::AccountSummaryTags::LookAheadNextChange = "LookAheadNextChange";
std::string IbApiClient::AccountSummaryTags::LookAheadInitMarginReq = "LookAheadInitMarginReq";
std::string IbApiClient::AccountSummaryTags::LookAheadMaintMarginReq = "LookAheadMaintMarginReq";
std::string IbApiClient::AccountSummaryTags::LookAheadAvailableFunds = "LookAheadAvailableFunds";
std::string IbApiClient::AccountSummaryTags::LookAheadExcessLiquidity = "LookAheadExcessLiquidity";
std::string IbApiClient::AccountSummaryTags::HighestSeverity = "HighestSeverity";
std::string IbApiClient::AccountSummaryTags::DayTradesRemaining = "DayTradesRemaining";
std::string IbApiClient::AccountSummaryTags::Leverage = "Leverage";

std::string IbApiClient::AccountSummaryTags::getAllTags(){
	return AccountType + "," + NetLiquidation + "," + TotalCashValue + "," + SettledCash + "," + AccruedCash + "," + BuyingPower + "," + EquityWithLoanValue + "," + PreviousEquityWithLoanValue + "," + GrossPositionValue + "," + ReqTEquity
                + "," + ReqTMargin + "," + SMA + "," + InitMarginReq + "," + MaintMarginReq + "," + AvailableFunds + "," + ExcessLiquidity + "," + Cushion + "," + FullInitMarginReq + "," + FullMaintMarginReq + "," + FullAvailableFunds + "," + FullExcessLiquidity
                + "," + LookAheadNextChange + "," + LookAheadInitMarginReq + "," + LookAheadMaintMarginReq + "," + LookAheadAvailableFunds + "," + LookAheadExcessLiquidity + "," + HighestSeverity + "," + DayTradesRemaining + "," + Leverage;
}