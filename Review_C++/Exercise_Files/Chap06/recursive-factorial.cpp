// recursive-factorial.cpp by Bill Weinman <http://bw.org/>
// updated 2022-06-01
#include <iostream>

using std::cout;

unsigned long factorial(unsigned long n) {
    if (n < 2) return 1;
    return n * factorial(n - 1); //Using the function again inside the function
}

int main() {
    unsigned long n {5};
    cout <<"Factorial of "<< n << " is "<< factorial(n);
}
