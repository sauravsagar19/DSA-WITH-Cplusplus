#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <limits>
using namespace std;
void Merge(int arr[], int s, int mid, int e)
{
    // As discussed, first we'll create a copy of each half of the array
    // int mid=(s+e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int a[len1];
    int b[len2];

    // lets insert the elements in the arrays
    for (int i = 0; i < len1; i++)
    {
        a[i] = arr[s + i];
    }
    for (int i = 0; i < len2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    // Now lets merge the two soted array(it is also a type of quest)
    int i = 0;
    int j = 0;
    int k = s; // bari array ke liye
    while (i < len1 && j < len2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[i];
            k++;
            j++;
        }
    }
    // lets suppoes now, some elements of a left
    while (i < len1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < len2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void MergeSort(int arr[], int s, int e)
{
    // if (s >= e)
    // {
    //     return;
    // }
    if(s<e){
    int mid = (s + e) / 2;
    // Devide the array from Mid
    MergeSort(arr, s, mid);
    MergeSort(arr, mid + 1, e);

    // Merge
    Merge(arr, s, mid, e);
    }
}
int main()
{
    int arr[] = {9, 1, 10, 5, 3};
    MergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}