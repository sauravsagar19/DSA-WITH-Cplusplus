#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<stack>
using namespace std;
bool check_Redundant(string str){
    stack<char>s;
    for(char ch :str){  // we iterate over every char
        if(ch!=')'){
            s.push(ch); // every thing except ')'is pushed
        }
        else{
            // ')'
        bool operator_found=false;
        while(!s.empty() and s.top()!='('){
            char top=s.top(); // to check operator
            if(top=='+' or top=='-' or top=='*' or top=='/'){
              operator_found=true;  
            }
            s.pop();  // operator is judged and now will be poped
        }
        s.pop(); // '(' bracket wll be poped
        if(operator_found==false){
            return true;
        }
        
        }
    }
return false;
}
int main(){
string str="((a+b)+c)+(d*e)";
if(check_Redundant(str)){
    cout<<"contains Redundant Parenthesis"<<endl;

}
else{
    cout<<"does not contains Redundant Parenthesis"<<endl;
}
return 0;
}