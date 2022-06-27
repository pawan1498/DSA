#include <bits/stdc++.h>
using namespace std;

void sol(int arr[], int n, int k)
{

    for (int i = 0; i < n;i+=k)
    {
        int left = i;
        int right =i+k -1; 
        // int right =min(i+k-1 , n-1);
        while (left < right)
        {
            swap(arr[left++], arr[right--]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    sol(arr, n, k);
}