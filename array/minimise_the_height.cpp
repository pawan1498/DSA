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
        int k;
        cin >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        if ((arr[n-1] - arr[0]) <= 0)
        {
            arr[0] += k;
            arr[n-1] += k;
        }
        else
        {
            arr[0] += k;
            arr[n-1] += k;
        }
        // cout << " arr[n]";
        int res = arr[n-1] - arr[0];
        cout << endl;
        cout << res;
    }
    return 0;
}