#define CATCH_CONFIG_MAIN

#include "../catch.hpp"
#include "../counter/SubsequenceCounter.h"
#include "../counter/SimpleSubsequenceCounter.h"

TEST_CASE(){
    SubsequenceCounter* counter = new SimpleSubsequenceCounter;
    REQUIRE(counter->countSubstring("fuzzyzy", "z") == 3);
}

TEST_CASE(){
    SubsequenceCounter* counter = new SimpleSubsequenceCounter;
    REQUIRE(counter->countSubstring("fuzzyzy", "zz") == 1);
}

TEST_CASE(){
    SubsequenceCounter* counter = new SimpleSubsequenceCounter;
    REQUIRE(counter->countSubstring("aaaa", "z") == 0);
}

