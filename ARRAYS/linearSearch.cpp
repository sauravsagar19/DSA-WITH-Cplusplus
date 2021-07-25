#include <iostream>
using namespace std;
int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
        return -1;
}
int main()
{
    int n, value;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value :";
        cin >> value;
        arr[i] = value;
    }
    int key;
    cout << "searching value:  ";
    cin >> key;
    cout<<LinearSearch(arr,n,key);
    return 0;
}