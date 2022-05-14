#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void Insertion(int val){
        size++;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2; // parent of this node
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);     // Heapify
                index=parent;
            }else{
                return;
            }
        }
    }
    // Deletion In Heap ( root is deleted or poped)
    void pop(){
        if(size==0){
            return;       // If size=0 ; means, there is nothing to delete.
        }
        arr[1]=arr[size];  // swapped
        size--;   // removed

        // Now arranging the root 
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            if(leftIndex < size && arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex < size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(auto i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;

    }
};
int main(){
heap h;
h.Insertion(50);
h.Insertion(55);
h.Insertion(53);
h.Insertion(52);
h.Insertion(54);
h.print();
h.pop();
h.print();
return 0;
}