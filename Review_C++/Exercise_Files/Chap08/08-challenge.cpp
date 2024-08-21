// 08-challenge.cpp by Bill Weinman [bw.org]
// updated 2022-06-01

#include <iostream>


using std::cout;

template <typename T> myMax( T n)
{
    auto result = n;
    while (n > 1) {
        result *= --n;
    }
    return result;
}






int main() {
    unsigned long n {5};
    cout << "Factorial of" << n<< "is {}\n"<< factorial(n);
}
