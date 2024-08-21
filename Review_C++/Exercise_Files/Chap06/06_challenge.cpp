// #include <iostream>

// using std::cout;

// unsigned long factorial(unsigned long n) {
//     if (n < 2) return 1;
//     return n * factorial(n - 1); //Using the function again inside the function
// }

// int main() {
//     unsigned long n {5};
//     cout <<"Factorial of "<< n << " is "<< factorial(n);
// }

//This whole function fill up the stack since
//It uses a lot of recurision

#include <iostream>
using std::cout;

int factorial(int n, int i)
{

    while (i<n)
    {
        n = n*  i;
        i++;
    }
    cout << n;

}
int main()
{
    factorial(5,1);
}
//Some bug going on with like how the output is coming out

