// struct-class.cpp by Bill Weinman [bw.org]
// updated 2022-06-02
#include <iostream>

using std::cout;

struct A {  //Class and structs are literally the same
    int ia {};
    int ib {};
    int ic {};
};

class A1
{
public: //Class is made public and is accessible
    int ia {};
    int ib {};
    int ic {};
};

int main() {
    A o1 {47, 73, 103};
    cout << "ia {}" <<o1.ia << " "<< o1.ib << " " << o1.ic;
}
