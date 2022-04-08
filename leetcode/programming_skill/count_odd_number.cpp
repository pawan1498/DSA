#include <bits/stdc++.h>

using namespace std;


void printarray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int *countOdds(int low, int high)
{
    int i = 0, arr[high];
    while (low != high+1)
    {
        if (low % 2 != 0)
        {
            arr[i] = low;
            i++;
        }
        low++;
    }
    printarray(arr, i);
    return arr ; 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int low, high;
        cin >> low >> high;
        int *p = countOdds(low, high);
    }
    return 0;
}