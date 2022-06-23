#include <bits/stdc++.h>
using namespace std;
int  main()
{
    long long int  t;
    cin >> t;
    while (t--)
    {
        long long int  n;
        cin >> n;
        long long int  arr[n];
        for (long long int  i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        long long int  q;
        cin >> q;
        while (q--)
        {
            long long int  l, r, x;
            cin >> l >> r >> x;
            long long int  count = 0;
            for (long long int  i = l; i <= r; i++)
            {
                // cout << (arr[i] ^ x )<< "  " << (arr[i] & x) << endl;
                if (x <= arr[i])
                {
                    if ((arr[i] ^ x) > (arr[i] & x))
                    {
                        count++;
                       
                    }
                }
                else
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
}