#include <iostream>
using namespace std;

# define MONTHS_IN_YEAR 12

int main()
{
    const int monthsInYear = 12;
    double principal       = 10000000.0;
    double interest        = 0.05;
    int yeartOfLoan        = 30;
    double monthInterest   = interest / MONTHS_IN_YEAR;
    long mothOfLoan = yeartOfLoan * monthsInYear;


    std::cout << mothOfLoan;
https://youtu.be/ZIWzuZcpIRU?list=PLDkrNO-iQ9O4cLL0_jIIOwsXsQqfUXyQy

    if (__cplusplus == 199711L) {
        std::cout << "C++98/03 (ISO/IEC 14882:1998 or 2003)" << std::endl;
    }
    else if (__cplusplus == 201103L) {
        std::cout << "C++11 (ISO/IEC 14882:2011)" << std::endl;
    }
    else if (__cplusplus == 201402L) {
        std::cout << "C++14 (ISO/IEC 14882:2014)" << std::endl;
    }
    else if (__cplusplus == 201703L) {
        std::cout << "C++17 (ISO/IEC 14882:2017)" << std::endl;
    }
    else if (__cplusplus == 202002L) {
        std::cout << "C++20 (ISO/IEC 14882:2020)" << std::endl;
    }
    else if (__cplusplus > 202002L) {
        std::cout << "C++23 or later" << std::endl;
    }
    else {
        std::cout << "Pre-standard C++ (before C++98)" << std::endl;
    }

    std::cout << "__cplusplus: " << __cplusplus << std::endl;
}
