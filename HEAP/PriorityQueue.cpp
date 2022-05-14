#include<iostream>
#include<queue>
using namespace std;
int main(){

// Max Heap 
cout<<"Max Heap--------------------------------------------------"<<endl;
priority_queue<int,vector<int>>Max_heap;
Max_heap.push(10);
Max_heap.push(50);
Max_heap.push(100);
Max_heap.push(65);
Max_heap.push(90);
cout<<"Printing element top: "<<Max_heap.top();
Max_heap.pop();
cout<<endl;
cout<<"Printing element top: "<<Max_heap.top();
cout<<endl;
cout<<Max_heap.size()<<endl;
if(Max_heap.empty()){
    cout<<"Empty !"<<endl;
}
else{
    cout<<"Non Empty!"<<endl;
}
while(!Max_heap.empty()){
    cout<<Max_heap.top()<<" ";
    Max_heap.pop();
}
cout<<endl;
cout<<Max_heap.empty()<<endl;

// Min Heap
cout<<"MIN HEAP----------------------------------------------------"<<endl;
priority_queue<int,vector<int>,greater<int>>Min_heap;
Min_heap.push(50);
Min_heap.push(10);
Min_heap.push(100);
Min_heap.push(65);
Min_heap.push(90);
cout<<"Printing element top: "<<Min_heap.top();
Min_heap.pop();
cout<<endl;
cout<<"Printing element top: "<<Min_heap.top();
cout<<endl;
cout<<Min_heap.size()<<endl;
if(Min_heap.empty()){
    cout<<"Empty !"<<endl;
}
else{
    cout<<"Non Empty!"<<endl;
}
while(!Min_heap.empty()){
    cout<<Min_heap.top()<<" ";
    Min_heap.pop();
}cout<<endl;
cout<<Min_heap.empty()<<endl;
return 0;
}