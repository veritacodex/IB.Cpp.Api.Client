INCLUDE_DIRECTORIES(${IbApiClient_SOURCE_DIR}/Library/inc)

ADD_LIBRARY(IbApiClient SHARED IbClient.cpp)
TARGET_LINK_DIRECTORIES(IbApiClient PUBLIC ${IbApiClient_SOURCE_DIR}/Third-Party/tws-api)
TARGET_LINK_LIBRARIES(IbApiClient PUBLIC libTwsSocketClient)