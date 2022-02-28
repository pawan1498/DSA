#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, pat;
        cin >> str;
        cin >> pat;
        int n = str.length();
        int m = pat.length();
        // cout << m;
        for (int i = 0; i <= n - m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (pat[j] != str[i + j])
                    break;
                if (j == m - 1)
                {
                    cout << i;
                    return 0;
                }
                // cout << "*";
            }
            // cout << endl;
        }
    }
    cout << -1 << endl;
}