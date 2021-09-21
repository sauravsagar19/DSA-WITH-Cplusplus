#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<vector>
using namespace std;
void print_vector(vector<int> vector1)
{
   for (int i = 0; i < vector1.size(); i++){
        cout << vector1[i] << " ";
    }
    cout << "\n";
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int>NegV;
vector<int>PosV;
for(int i=0;i<n;i++){
    if(arr[i]<0)
        NegV.push_back(arr[i]);
    else if(arr[i]>=0)
        PosV.push_back(arr[i]);
}
vector<int>Resultant(NegV.size()+PosV.size());

// for(int i=0;i<NegV.size();i++){
//     cout<<NegV[i]<<" ";
// }
// cout<<endl;
// for(int i=0;i<PosV.size();i++){
//     cout<<PosV[i]<<" ";
// }
cout<<endl;
merge(NegV.begin(),NegV.end(),
    PosV.begin(),PosV.end(),
    Resultant.begin());
// for(int i=0;i<Resultant.size();i++){
//     cout<<Resultant[i]<<" ";
// }
sort(Resultant.begin(),Resultant.end());
print_vector(Resultant);
return 0;
}