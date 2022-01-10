#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count_set_bit(int tmp)
{
    int count = 0; 
    while(tmp > 0)
    {
       count ++;
       tmp = tmp & (tmp-1);
    }
    return count ; 
}
int main()
{
    int a, b;
    cin >> a >> b;
    int tmp = a ^ b;
    count_set_bit(tmp);
}