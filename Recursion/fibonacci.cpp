#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fibbo(int n)
{
    if (n == 0 || n == 1)
        return n;
    int answer = fibbo(n - 1) + fibbo(n - 2);
    return answer;
}

int main()
{
    int n;
    cout << "Enter the number of Term you want ? ";
    cin >> n;
    cout << fibbo(n);
    return 0;
}