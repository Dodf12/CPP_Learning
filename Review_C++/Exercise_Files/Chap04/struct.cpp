// struct.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <iostream>

using std::cout;

struct S {
    int i {};
    double d {};
    const char * s {};
};

int main() {
    S s1 { 3, 47.9, "string one" };
    auto* sp = &s1;
    sp->d = 73.0;  //Pointers can also work really well.
    cout << "s1: {}, {}, {}\n"<< s1.i << s1.d<< s1.s;
}
