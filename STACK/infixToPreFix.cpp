// every thing is same as that with Infix to postFix except we have to do a reverse function for the expression
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <limits>
#include <stack>
using namespace std;

int Precedence(char ch){
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
string infixToPrefix(string s)
{
    stack<char> st;
    string res;

    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'B')
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
            
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }

            if (!st.empty())
            {
                st.pop();
            }
        }

        else{
            while(!st.empty() && Precedence(st.top())>=Precedence(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }

    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
cout<<infixToPrefix("(a-b/c)*(a/k-l)");
    return 0;
}