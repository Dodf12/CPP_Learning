// template-function.cpp by Bill Weinman [bw.org]
// updated 2022-06-04
#include <iostream>
#include <string>

using std::cout;

template<typename T>
T maxof(T a, T b) {
    return a > b ? a : b;
}

int main() {
    int x {47};
    int y {73};
    auto z = maxof<int>(x, y);
    std::string a {"food"};
    std::string b {"bar"};
    auto c = maxof<std::string>(a,b);
    cout << "a" << c << " \n";
    cout << "max is {}\n"<< z;
    return 0;
}
