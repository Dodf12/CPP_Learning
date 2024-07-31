// func.cpp by Bill Weinman [bw.org]
// updated 2022-05-23
// #include <format>
#include <iostream>

// using std::format;
using std::cout;

int func(int i) {
    cout << "this is func()\n" + i;
    return i * 2;
}

int main()
{
    cout << "this is main()\n";
    func(3);
}
