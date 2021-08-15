#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
int main(){

// string s(5,'n');
// cout<<s<<" ";

// string str;
// getline(cin,str);     // it takes string as it is
// cout<<str<<endl;

// string str;
// cin>>str;      // it print string without any space
// cout<<str;   // if we give whole string as input tham it would only print first word



// APPEND

// string S1="FAM";
// string S2="ILY";

// cout<<S1+S2<<endl;  I method
// S1=S1+S2;    // II method
// cout<<S1<<endl;  

// S1.append(S2);
// cout<<S1<<endl;




// EACH ELEMENT ACCESS


// cout<<str[1]<<endl;
// for(int i=0;i<str.length();i++){        // for(int i=0;i<str.size();i++){

//      cout<<str[i]<<endl;
// }



//CLEAR 

// str.clear();
// cout<<str;



//ERASE  

// str.erase(1,4);
// cout<<str<<endl;

// FIND

// cout<<str.find("av");

// INSERT

// str.insert(2,"lol");
// cout<<str;


// SUBSTRING

// string s1=str.substr(6,5);
// cout<<s1;

// STRING TO INTEGER(stoi())

// int x=stoi(str);
// cout<<x<<endl;

//INTEGER TO STRING (to_string())

int x=100;
cout<<to_string(x)+"200";

return 0;
}