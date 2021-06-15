#include <iostream>
#include "counter/SubsequenceCounter.h"
#include "counter/SimpleSubsequenceCounter.h"

int main() {
    std::cout << "Input your word:" << std::endl;
    std::string input;
    std::cin>>input;
    SubsequenceCounter* counter = new SimpleSubsequenceCounter;
    std::cout << "z: " << counter->countSubstring(input, "z") << std::endl;
    std::cout << "zz: " << counter->countSubstring(input, "zz") << std::endl;
    return 0;
}
