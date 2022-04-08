#include <bits/stdc++.h>
using namespace std;

int s_toi(string s)
{
    int x = 0; // may take long long
    for (int i = 0; i < s.length(); i++)
        x = x * 10 + s[i] - '0';

    return x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        string p;
        cin >> s >> p;
        int x = stoi(s)%INT_MAX;
        int y = stoi(p)% INT_MAX;

        // cout << x << endl;
        // cout << y << endl;
        // x = 7 ;
        // y = 29 ;
        int m = x * y;
        int m = m % INT_MAX; 

        // cout << m << endl;
        cout << to_string(m);
    }
}