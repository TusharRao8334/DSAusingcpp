#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int exponents(int n)
{
    // base case
    if (n == 0)
        return 1;

    // odd
    int answer = exponents(n / 2);
    if (n & 1)
        return 2 * answer * answer;
    else
        // even
        return answer * answer;
}

int main()
{
    int n;
    cout << "What power you want of 2\n";
    cin >> n;
    cout << exponents(n);
    return 0;
}