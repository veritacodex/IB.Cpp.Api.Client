#ifndef IBAPICLIENT_DATEUTILS_H
#define IBAPICLIENT_DATEUTILS_H

#include <chrono>
#include <iomanip>
#include <sstream>
#include <string>

namespace IbApiClient {
    inline std::string timePointToString(const  std::chrono::system_clock::time_point &time) {
        const std::time_t tt = std::chrono::system_clock::to_time_t(time);
        const std::tm tm = *std::gmtime(&tt);
        std::stringstream ss;
        ss << std::put_time(&tm, "%d-%m-%Y %H:%M:%S");
        return ss.str();
    }
}
#endif
