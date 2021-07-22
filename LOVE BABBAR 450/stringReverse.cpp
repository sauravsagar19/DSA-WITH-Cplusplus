// Using Recursion

// #include<iostream>
// using namespace std;
// void Reverse(string s){
//     if(s.length()==0){
//         return ;
//     }
//     char ch=s[0];
//     string ros=s.substr(1);
//     Reverse(ros);
//     cout<<s[0]<<" ";
// }
// int main(){
// string s1="SA";
// Reverse(s1);
// return 0;
// }

// 2nd method 

// #include<iostream>
// #include<algorithm>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main(){
// string s1="SAURAV ";
// reverse(s1.begin(),s1.end());
// cout<<s1;
// return 0;
// }

// 3rd method
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>
using namespace std;
string ReverseString(string s){
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s1="SAURAV";
    cout<<ReverseString(s1);

    return 0;
}
