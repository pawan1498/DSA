#include <bits/stdc++.h>
using namespace std;

int get_min(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "min:  " << min << endl;
    return min;
}

int get_max(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "max:  " << max << endl;
    return max;
}
int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = get_min(arr, n);
    int max = get_max(arr, n);

    min = min + k;
    max = max + k;
    cout << "-------------------" << endl;
    cout << "min -->" << min << endl;
    cout << "max -->" << max << endl;

    cout << max - min;
    
}