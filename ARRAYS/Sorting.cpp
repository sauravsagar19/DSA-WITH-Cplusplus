#include <iostream>
#include<algorithm>
using namespace std;
// SELECTION SORT

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// BUBBLE SORT

void BubbleSort(int arr[], int n)
{
    int counter = 1;
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// REVERSE AN ARRAY

void Reverse(int arr[],int n){
    reverse(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// INSERTION SORT

void Insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int current=arr[i];
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, val;
    cin >> n;
    int arr[n];
    cout << "Enter the value: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        arr[i] = val;
    }
    // SelectionSort(arr,n);
    // BubbleSort(arr, n);
    // Reverse(arr,n);
    Insertion(arr,n);
    return 0;
}