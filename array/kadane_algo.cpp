// this algo is to find subarray having max value which contain non negative value in O(n) time complexities.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long int curr = 0, max = arr[0];
    for (int i = 0; i < n; i++)
    {
        curr = curr + arr[i];

        if (curr > max)
        {
            max = curr;
        }
        if (curr < 0)
        {
            curr = 0;
        }
    }
   

    return max;
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int curr = 0, max = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            curr = curr + arr[i];

            if (curr > max)
                max = curr;

            if (curr < 0)
                curr = 0;
            

        }
        cout << max ; 
    }
    return 0;
}