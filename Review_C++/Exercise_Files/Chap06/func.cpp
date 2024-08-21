// func.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <iostream>
#include <string>

using std::cout;

void funct(int a)
{
    cout << a;
}



//or

void func(int b =0) //Can automatically add parameters to stop error
{
    cout << b;
}


void func3(int c) //void means not return type
{
    c = 73;
    cout << c;
}

int kaata(int a)
{
    return a * 2;

}

std::string agar(int a)
{
    static std::string s = format("val is", a*2);
    cout <<"this is agar\n"
    return s;

}
int main()
{
    int c = 37;
    cout << "Main function\n"<<c;
    cout << "value is\n";
    func(c);

    int a {47};
    funct(a); 
    cout << "this is main\n"<< " " <<a;

    //Returning Values from a function
    int abak = kaata(2);
    cout << "Output is:\n" << " " <<abak;
    
}