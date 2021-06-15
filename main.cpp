#include <iostream>
#include <algorithm>

int countSubstring(const std::string& s, const std::string& target){
    int occurrences = 0;
    std::string::size_type pos = 0;
    while ((pos = s.find(target, pos )) != std::string::npos) {
        ++ occurrences;
        pos += target.length();
    }
    return occurrences;
}

int main() {
    std::cout << "Input your word:" << std::endl;
    std::string input;
    std::cin>>input;
    std::cout << input << std::endl;
    std::cout << countSubstring(input, "z")<<std::endl;
    std::cout << countSubstring(input, "zz")<<std::endl;
    return 0;
}
