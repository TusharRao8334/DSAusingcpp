#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool issorted(vector<int> arr, int index)
{
    // traverse array
    if (index >= arr.size())
    {
        return true;
    }

    // compare with prev element
    if (arr[index] < arr[index - 1])
    {
        return false;
    }

    return issorted(arr, index + 1);
}

// driver code
int main()
{
    int n;
    cout << "Enter Number Element u Want in array : \n";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool chechanswer = issorted(arr, 1);

    if (chechanswer)
        cout << "Array is Sorted ...." << endl;
    else
        cout << "Not Sorted ...." << endl;

    return 0;
}