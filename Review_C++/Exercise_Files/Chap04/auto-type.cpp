// auto-type.cpp by Bill Weinman [bw.org]
// updated 2022-05-25
// #include <format>
#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    std::string s {"This is a string"};
    auto x = s; //HAVE TO INITIALZE AUTO WITH SOMETHING
    //Cannot just leave auto and put it ther
    cout << "x is {}\n"<< x;
    cout << "type of x is {}\n" << typeid(x).name();
}
