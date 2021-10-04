#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<stack>
#include<math.h>
using namespace std;

int PostfixEvaluation(string str){
    stack<int>st;
    for(int i=0;i<str.length();i++){ //in postFix we start traversing from start to end
        if(str[i]>='0' && str[i]<='9'){
            st.push(str[i]-'0');
        }
        else{
            int op2=st.top();
            st.pop();

            int op1=st.top();
            st.pop();
        switch (str[i])
        {
        case '+':
        st.push(op1+op2);
            break;
        case '-':
        st.push(op1-op2);
            break;
        case '*':
        st.push(op1*op2);
            break;
        case '/':
        st.push(op1/op2);
            break;
        case '^':
        st.push(pow(op1,op2));
            break;
    
        }

        }
        }
        return st.top();
    }

int main(){

cout<<PostfixEvaluation("46+2/5*7+");
return 0;
}