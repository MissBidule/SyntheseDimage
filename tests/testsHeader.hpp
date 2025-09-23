#ifndef _TESTS_HEADER_HPP_
#define _TESTS_HEADER_HPP_

#include <cassert>
#include <iostream>

class Tests {
public :
    Tests(std::string name) : testName(name) {};
    Tests() = delete;
    virtual void launchTests() = 0;
protected :
    std::string testName;
    void endTest() { std::cout << testName << " tests were successful."; };
};

#endif //_TESTS_HEADER_HPP