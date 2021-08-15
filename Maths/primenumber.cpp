#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number To check whether the number is prime or not :";
    cin >> n;
    int m = n / 2;
    for (int i = 1; i < m; i++)
    {
        if ((n % i) == 0)
        {
            cout << "Number is Prime";
        }
        else
        {
            cout << "Number Is Not Prime";
        }
    }
    return 0;
}