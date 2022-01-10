// insert m in n ;
#include <iostream>
using namespace std;

int bit_count(int x)
{
    if (x == 0)
        return 0;

    return (bit_count(x >> 1) + 1);
}

int check(int n, int m, int i, int j)
{
    // cout << m<<endl <<n << endl <<(j-i+1);
    if (j > n || i < 0 || (j - i + 1) < m || m > n)
        return 0;

    return 1;
}
int mask(int n, int start, int end)
{

    int y = 0, m = 0;
    for (int i = start; i >= end; i--)
    {
        y = 1 << i;
        m = m + y;
    }

    return m;
}

int update(int n, int start, int end)
{ // start is greater index , end is smaller index of bit
    int m = mask(n, start, end);
    // cout << ~m;
    n = n & (~m);

    return n;
}
int main()
{
    int n = 115;
    int m = 5;
    int j = 4;
    int i = 2;
    // 

    int n_bit = bit_count(n);
    int m_bit = bit_count(m);

    if (check(n_bit, m_bit, i, j))
    {
        n = update(n, j, i);
        // cout << n ;

        int x;
        for (int index = i; index <= j; index++)
        {
            if ((m & 1))
            {
                //even condition (!(m &1))
                x = 1 << index;
                n = n | x;
            }
            m = m >> 1;
        }
        cout << n ;
    }
    else
    {
        cout << "not possible";
        return 0;
    }

    return 0;
}