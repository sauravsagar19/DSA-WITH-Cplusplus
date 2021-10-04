#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <limits>
using namespace std;
int Precedence(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infixToPostfix(string s)
{
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        // for operands

        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            result += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }

        // for operators 

        else
        {
            while (!st.empty() && Precedence(st.top()) >= Precedence(s[i]))
            {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    // checking if something is left out in the stack
    
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    return result;
}
int main()
{
    cout << infixToPostfix("(a-b/c)*(a/k-l)") << endl;
    return 0;
}