
#include "SimpleSubsequenceCounter.h"

int SimpleSubsequenceCounter::countSubstring(const std::string &s, const std::string &target) {
    int occurrences = 0;
    std::string::size_type pos = 0;
    while ((pos = s.find(target, pos )) != std::string::npos) {
        ++ occurrences;
        pos += target.length();
    }
    return occurrences;
}
