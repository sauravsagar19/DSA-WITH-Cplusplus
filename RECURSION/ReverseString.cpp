// Reverse String using Recursion
#include<iostream>
using namespace std;
string reverseStr(string s,int i,int j){
    string rest;
    if(i>j){
        return s;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    rest=reverseStr(s,i,j);
    return rest;


}
int main(){
string name="hello";
int i=0;
int j=name.length()-1;
cout<<reverseStr(name,i,j);
return 0;
}