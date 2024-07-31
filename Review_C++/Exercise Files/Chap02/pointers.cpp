// pointers.cpp by Bill Weinman [bw.org]
// updated 2022-05-21

//Com
// #include <format>
#include <iostream>

//using std::format;
using std::cout;

int main() {
    int x {7};
    int y {42};
    int* ip = &x;

    // cout << format("The value of x is {}\n", x);
    // cout << format("The value of y is {}\n", y);
    // cout << format("The value of *ip is {}\n", *ip);

    ip = &y;
    //cout << "The value of *ip is {}\n", ip;


    //Pointer-Pointer ptr stores address of i
    int i = 3;
    int *ptr = &i;
    std::cout << *ptr; //Outputs 3

    //Reference or alias for i
    int &ref = i;

    int a;
    a = 1;
    int d = 2;
    int b;
    b=a; //The variable b is held in another memory location


    //Pointer points to the value without storing location memory

    int* qcp;
    qcp = &a;  //qcp references the integer above
    y = *ip;
    int& z = a; //This is a reference

    qcp = &d;

    //Value of a reference is always the value of the referred variable
    //Cannot change a reference
        //Z will always be a reference to a and cannot change that
        //Can still change teh value of the reference

    cout << *qcp;
    cout << z;

    //Pointers can be changed referencing/dereferencing
    //References CANNOT

}
