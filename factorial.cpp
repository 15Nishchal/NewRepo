#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    //base case 
    if(n == 0)
    {
        return 1;
    }

    //recursive call
    int smallAns = factorial(n-1);

    //small calculation
    return n * smallAns;
}

int main()
{
    int n = 3;
    cout << factorial(n) << endl;
}