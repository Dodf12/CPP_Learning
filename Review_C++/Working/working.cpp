#include <format>
#include <iostream>

using std::cout;

int main()
{
    cout<< "Hello, World!\n";
    int x;
    x = 42 * (12+14);

    int i {47};
    cout << format("i is {}\n", i);

}