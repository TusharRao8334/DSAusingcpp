#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int expo(int n)
{
    if (n == 0)
        return 1;
    else
        return 2 * expo(n - 1);
}

int main()
{
    int n;
    cout << "Enter the exponent :" << endl;
    cin >> n;
    cout << 2 * expo(n - 1);
    return 0;
}