// class.cpp by Bill Weinman <http://bw.org/>
// updated 2022-06-01
#include <iostream>

using std::cout;

// a very simple class
class C1 { //Class names
    int c1val {}; //Constructor zone
public:  //Declares class is accessible publically
    void setvalue(int value);
    int getvalue(); //Must put a const up here
    int getvalue() const;
};


int C1::getvalue()
{
    return c1val;
}

int C1::getvalue() const //This is a const qualified function
//Have to use if you declare an object as const
{
    return c1val;

}
void C1::setvalue(int value) 
{ 
    c1val = value; 
}
//Genera

int main() {
    C1 o1;
    o1.setvalue(47);
    const C1 o2 = o1;
    cout << "value is {}\n" << o1.getvalue();
    cout << "value is {}\n" << o2.getvalue(); //This line will not work
    //Because the "function is not what you call, const qualified"
    //
}
