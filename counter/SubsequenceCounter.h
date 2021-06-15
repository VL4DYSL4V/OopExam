
#ifndef TESTS_SUBSEQUENCECOUNTER_H
#define TESTS_SUBSEQUENCECOUNTER_H


#include <string>

class SubsequenceCounter {

public:
    virtual int countSubstring(const std::string& s, const std::string& target) = 0;

};


#endif //TESTS_SUBSEQUENCECOUNTER_H
