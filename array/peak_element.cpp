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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] > arr[1] || arr[n - 1] > arr[n - 2])
        {
            cout << "11" << endl;
            return 1;
        }   
        else
        {
            cout << "0" << endl;
            return 1;
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
            {
                cout << "12" << endl;
                return 1;
            }
        }
        cout << "0" << endl;

        // return 0;
    }
    // return 0;
}