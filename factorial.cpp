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
    int n;
    //taking user input from the user
    cin >> n;
    cout << factorial(n) << endl;
    cout << "Programs run successfully !" << endl;
}