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

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if ((arr[i] + arr[j]) == -arr[j])
                {
                    cout << i << j ;
                    return 0;
                }
            }
        }
        cout << 0;
    }
    return 0;
}