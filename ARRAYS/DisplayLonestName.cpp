#include<iostream>
using namespace std;
string longest(string names[], int n)
    {
        int max=0;
        for(int i=0;i<n;i++){
            if(names[i].length()>names[max].length()){
                max=i;
            }
        }
        return names[max];
    }
int main(){
string arr[5]={"gfg","saurav","dhgshgshgshdhg","ram","mohan"};
cout<<longest(arr,5);
return 0;
}