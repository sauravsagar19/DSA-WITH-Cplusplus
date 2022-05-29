#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

int merge(int arr[], int l, int mid, int r)
{

    // As discussed, first we'll create a copy of each half of the array
    // int mid=(s+e)/2;
    int inv_count=0;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2]; // temp array

    // lets insert the elements in the arrays

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    // Now lets merge the two soted array(it is also a type of ques)

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k++] = b[j++];
            inv_count=inv_count+(n1-i);
        }
    }
    // lets suppoes now, some elements of a left

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv_count;
}

int mergeSort(int arr[], int l, int r)
{
    int inv_count=0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        // Devide the array from Mid

        inv_count+=mergeSort(arr, l, mid);
        inv_count+=mergeSort(arr, mid + 1, r);
        // Merge
        inv_count+=merge(arr, l, mid, r);
    }
    return inv_count;
}
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    cout<<mergeSort(arr,0,4);
    
    return 0;
}