#ifndef IBAPICLIENT_STRINGUTILS_H
#define IBAPICLIENT_STRINGUTILS_H

#include <sstream>
#include <string>
#include <vector>

namespace IbApiClient {
    inline std::vector<std::string> split(const std::string &input, const char &delimiter) {
        std::string tmp;
        std::stringstream ss(input);
        std::vector<std::string> words;
        while (getline(ss, tmp, delimiter)) {
            words.push_back(tmp);
        }
        return words;
    }
}
#endif