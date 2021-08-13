#include <iostream>
using namespace std;

int numberofdigits(int n)
{
    int counter = 0;
    while (n != 0)
    {
        n = n / 10;
        ++counter;
    }
    cout << counter;
}

int main()
{
    numberofdigits(1235);
    return 0;
}