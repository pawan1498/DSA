#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3][3][3];
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    count++; 
                    arr[i][j][k] = count ; 
                    cout << arr[i][j][k] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}