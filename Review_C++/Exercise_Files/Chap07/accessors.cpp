// accessors.cpp by Bill Weinman [bw.org]
// updated 2022-06-02
#include <iostream>

using std::cout;

class A {
    int ia {};
    int ib {};
    int ic {};
public:
    A (int a, int b, int c) : ia(a), ib(b), ic(c) {} //C++ constructer
    //Has 3 arguments, and has initializers
    void seta(int a) { ia = a; }
    void setb(int b) { ib = b; }
    void setc(int c) { ic = c; }
    int geta() const { return ia; }
    int getb() const { return ib; }
    int getc() const { return ic; }
};

int main() {
    A o1 {47, 73, 103};
    cout << o1.geta()<< o1.getb()<<o1.getc();
    //Cannot get the variables directly because they
    //are private in class, so use getters 
}
