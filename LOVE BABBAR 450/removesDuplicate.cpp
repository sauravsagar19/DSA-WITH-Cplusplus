// Without Recursion
#include <iostream>
using namespace std;
string RemDup(string S)
{
    int count = 0;
    for (int i = 0; i < S.length(); i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (S[i] == S[j])
                break;
        }

        if (j == i)
            S[count++] = S[i];
    }

return S.substr(0, count);
}

int main()
{
    string s1 = "SAUSRAV";
    cout << RemDup(s1);
    return 0;
}