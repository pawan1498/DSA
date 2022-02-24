#include <bits/stdc++.h>
using namespace std;
int fun(string s, int k, int n, char c)
{
    string x;
    int count = 0;
    for (int i = 1; i <= k; i++)
    {
        x = x + s;
    }
    cout << x;

    for (int j = 1; j <= n; j++)
    {
        if (s[j] == c)
        {
            cout << "*";
            count++;
        }
    }
    // code here
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s ; 
        cin >> s;

        int k , n ;
        char   c ;
        cin >> k >> n >> c ; 
        fun(s,k,n,c);
    }
    return 0;
}