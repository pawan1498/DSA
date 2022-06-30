#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int num;
        cin >> num;
        unsigned int NO_OF_BITS = sizeof(num) * 8;
        unsigned int reverse_num = 0;
        int i;
        for (i = 0; i < NO_OF_BITS; i++)
        {
            if ((num & (1 << i)))
            {
                cout << "i:" << i << endl;
                cout << reverse_num << endl;
                reverse_num |= 1 << ((NO_OF_BITS - 1) - i);
                cout << "output :" << reverse_num << endl;
            }
        }

        // cout << reverse_num;
    }
}

/*

we need to reverse bit 
make a variable called reverse_num , initialise with zero
1. first we have to find  set bit in given number 
2. as we get index for set bit make a mask 
   1 << (31 - current_set_bit_index )
3. then make or operation between reverse_num and mask 
4. repeat until the last set bit 
*/