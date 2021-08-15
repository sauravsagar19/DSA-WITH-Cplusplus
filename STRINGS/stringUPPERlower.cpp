// Convert string to lower and upper case
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
int main(){
string str;
getline(cin,str);
// cout<<str;

// // uper case
// for(int i=0;i<str.length();i++){
//     if(str[i]>='a' && str[i]<='z'){
//         str[i]-=32;
//     }

// }
// cout<<str<<endl;

// // lower value 
// for(int i=0;i<str.length();i++){
//     if(str[i]>='A' && str[i]<='Z'){
//         str[i]+=32;
//     }
// }
// cout<<str<<endl;

// direct method     //  use TRANSFORM() function

//UPPER CASE: 

transform(str.begin(),str.end(),str.begin(),::toupper);
cout<<str<<endl;

// LOWER CASE: 

transform(str.begin(),str.end(),str.begin(),::tolower);
cout<<str<<endl;

return 0;
}