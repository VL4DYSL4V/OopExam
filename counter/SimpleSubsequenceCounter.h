//
// Created by arzik on 15.06.2021.
//

#ifndef TESTS_SIMPLESUBSEQUENCECOUNTER_H
#define TESTS_SIMPLESUBSEQUENCECOUNTER_H
#include "SubsequenceCounter.h"

class SimpleSubsequenceCounter : public SubsequenceCounter{

    int countSubstring(const std::string &s, const std::string &target) override;

};


#endif //TESTS_SIMPLESUBSEQUENCECOUNTER_H
