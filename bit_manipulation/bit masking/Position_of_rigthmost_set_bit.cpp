#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int count = 0;
    if (a==0) return 0 ; 
    while (a > 0)
    {
        count++;
        if (a % 2 != 0)
        {
            cout << count ; 
            return 0;
        }
        a = a >> 1;
    }
}