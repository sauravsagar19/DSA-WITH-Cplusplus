#include<iostream>
#include<cmath>
#include<stack>
using namespace std;
// In prefix Evaluation we traversed from end to start
int PrefixEvaluation(string s){
    stack<int>st;

    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');   // as we have to insert the integer 
                                // thats why we substracted it from the Ascii value of 0
        }
        else{
            int op1=st.top();
            st.pop();

            int op2=st.top();
            st.pop();

        // for sign now, we do switch case
        switch (s[i])
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
cout<<PrefixEvaluation("-+7*45+20");
return 0;
}