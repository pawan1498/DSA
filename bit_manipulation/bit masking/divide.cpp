// C++ implementation to Divide two
// integers without using multiplication,
// division and mod operator
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

// Function to divide a by b and
// return floor value it
int divide(int dividend, int divisor)
{

    // Calculate sign of divisor i.e.,
    // sign will be negative only if
    // either one of them is negative
    // otherwise it will be positive
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    cout << sign <<endl ;
 int x = -INT_MAX;
    cout << dividend << endl ; 

    // Update both divisor and
    // dividend positive
    x = abs(dividend);
    divisor = abs(divisor);

    cout << "divident ka absolute :";
    cout << x << endl ; 
    // Initialize the quotient
    int quotient = 0;
    // while (dividend >= divisor)
    // {
    //     dividend -= divisor;
    //     ++quotient;
    // }
   
    // Return the value of quotient with the appropriate sign.
    return quotient * sign;
}

// Driver code
int main()
{
    int a = -2147483648, b = -1;
    cout << divide(a, b) << "\n";

    // a = 43, b = -8;
    // cout << divide(a, b);
    //  int x = 2147483640, count = 0 ; 
    // while (x--)
    //     count++;
    // cout << count << endl;

    return 0;
}
