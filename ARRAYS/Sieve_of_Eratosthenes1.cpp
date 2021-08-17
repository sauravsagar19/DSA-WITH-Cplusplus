// its a better approach to find the prime number in the given range

#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

void PrimeSeive(int n)
{
    int primeNo[100] = {0};
    for (int i = 2; i < n; i++)
    {
        if (primeNo[i] == 0)
        { // 0 means unmarked
            for (int j = i * i; j <= n; j += i)
            {
                primeNo[j] = 1; // 1 means marked
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (primeNo[i] == 0) // jo jo unmarked hai unko print karna hai
        {
            cout << i << " ";
        }
    }
}
int main()
{
    PrimeSeive(50);
    return 0;
}