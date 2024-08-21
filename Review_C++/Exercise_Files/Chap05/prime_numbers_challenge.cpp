#include <iostream>

using std::cout;

int main()
{
    int factors = 0;
    for(int i = 2; i<101; ++i)
    {
        for (int j = 1; j<i+1; ++j)
        {
            if (i%j==0)
            {
                factors++;
            }

        }
        if (factors>2)
        {
            factors = 0;
        }
        else
        {
            cout << i << "\n";
        }
    }
}