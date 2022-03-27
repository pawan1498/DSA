#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, arr[n];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        
        int count = 1;
        int prev = arr[0];
        for (int i = 0; i < n; i++)
        {

            int curr = arr[i];

            if (curr == prev)
            {
                count++;

                if (count > (n / 2))
                {

                    cout << arr[i];
                    return 0;
                }
            }
            else
            {
                // cout << i ;
                prev = arr[i];
                count = 1;
            }
        }
    }
    return 0;
}