#include<iostream>
using namespace std;
bool checkPallindrome(string s, int i, int j){
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }else{

    i++; //agar last and first equal hai to i++ and j--
    j--;
    bool rest=checkPallindrome(s,i,j);
    return rest;
    }
}
int main(){
string s="abbabba";
int i=0;
int j=s.length()-1;
cout<<checkPallindrome(s,i,j);
return 0;
}