// array.cpp by Bill Weinman [bw.org]
// updated 2022-05-25
//#include <format>
#include <iostream>

//using std::format;
using std::cout;

int main() {
    int array[] { 1, 2, 3, 4, 5 };
    for(const int& i : array) {
        cout << "{} "<< i;
    }
    cout << '\n';

    array[2] = 42;
    auto x = array[2];
    cout << "x is {}\n" << x;

    //Primitive C-String
    const char s[] {'s', 't', 'r','i','n','g', '0' }; //0 is a null
    //terminator string
    cout << "{}\n" << s;

    for(const auto& c :s) //Using pointers makes it way faster
    {
        if (c) cout <<"{}\n" << c;
    }

    for(const auto* p = s;*p;++p)
    {
        cout << "{}\n" << *p;
    }
}
