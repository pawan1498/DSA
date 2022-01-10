#include <iostream>
using namespace std;
int logical_shift(int x)
{
   return  x = x << 6;
}
int arithmatic_shift(int x)
{
    return x = x >> 1;
}
int main()
{
    int x = 0;
    int y = 75 ; 
    cout << "LS = "<< logical_shift(x)<< endl;
    cout <<  "AS = "<< arithmatic_shift(y);
}