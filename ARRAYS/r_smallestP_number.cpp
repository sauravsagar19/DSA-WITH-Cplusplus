// smallest positive number
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <limits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int N = 1000;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            check[arr[i]]=true;
        }

    }
    int ans=-1;
    for(int i=1;i<N;i++){                     // since we need positive numbers
        if(check[i]==false){
            ans=i;
            break;
        }
    }
    cout<<"Ans: "<<ans<<endl;
    return 0;
}