// Balanced parenthesis:  [{()}] , {[()]}, ({[]})
// unbalanced parenthesis: {[(]}) 

#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<stack>
using namespace std;

bool isvalid(string s){

    stack<char>st;
    bool ans=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty()&& st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty()&& st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty()&& st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return ans;

}
int main(){
string s="{([])}";
if(isvalid(s)){
    cout<<"Valid string !"<<endl;
}
else{
    cout<<"Invalid string !"<<endl;
}
return 0;
}