#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s;
        cin >> s;
        int arr[n];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        // Your code here
        for (int i = 1; i <= n; i++)
        {
            long long count = 0;

            for (int j = i; j <= n; j++)
            {
                count = count + arr[j];
                if (count == s)
                {
                    cout << i << " " << j;
                    return 0 ; 
                }
            }
        }
    }
    return 0;
}