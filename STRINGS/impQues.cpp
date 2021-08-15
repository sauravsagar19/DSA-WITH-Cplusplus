// form Biggest Num from the numeric String

#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;

int main(){

// form Biggest Num from the numeric String

// string s="65181897314528763788999645210";
// sort(s.begin(),s.end(),greater<int>());
// cout<<s<<endl;

//  Max Frequency in a string
string s="fkksxgfcasklhdfdddffgysffff";
int freq[26];   // we have 26 alphabetical character
for(int i=0;i<=26;i++){
    freq[i]=0;
}
for(int i=0;i<s.length();i++){
    freq[s[i]-'a']++;
}
char ans;
int maxFreq=-1;
for(int i=0;i<26;i++){
    if(maxFreq<freq[i]){
        maxFreq=freq[i];
        ans='a'+i;
    }
}
cout<<maxFreq<<endl;
cout<<ans<<endl;
return 0;
}