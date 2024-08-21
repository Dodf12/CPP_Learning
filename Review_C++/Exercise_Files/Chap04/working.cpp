// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
//#include <format>
#include <iostream>

//using std::format;
using std::cout;

int func() 
{
    static int x {7};
    return ++x;
}
int main() {
    cout << "Hello, World!\n";
    cout << "function returns\n" << func();
}
