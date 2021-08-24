#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    // swap
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    //printing array
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    //driver code
    int arr[] = {1, 2, 3, 4, 5};
    //calculating size of array
    int n = sizeof(arr) / sizeof(arr[0]);
    // how many interger u want to rotate
    int d;
    cout << "Enter value of d :";
    cin >> d;
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}