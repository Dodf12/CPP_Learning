// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <format>
#include <iostream>

//using std::format;
using std::cout;

int main() {

    auto x = 7;
    auto y = 5;

    if (x>y)
    {
        cout << "Hello, World!\n";
    }
    else
    {
        cout << "Oopsie";
    }
    //If 0 is placed into if statement, it is considered false
    //Turnary conditional operator
    auto s = x <y ? "yes" : "no";
    cout << s;

    // std::array[] {1,2,3,4,5};

    // int i = 0;
    
    // while (i<5)
    // {
    //     cout << array[i];
    // }
    // //Do while loop
    // do {
    //      cout << array[i];

    // } while (i <5);

    const char string[] {"string"};

    for (const auto& e : string)
    {
        if (e==0) break;
        cout << "element is", e;
    }


}
