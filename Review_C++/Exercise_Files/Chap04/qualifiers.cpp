// qualifiers.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <iostream>

using std::cout;

int func() {
    int x {7};
    return ++x;
}

int main() {
    int i {42};
    i = 73;
    cout <<"The integer is {}"<< i;
}
