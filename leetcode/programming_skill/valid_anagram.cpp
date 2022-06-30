#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int x = 0, y = 0;
    for (int i = 0; i < s.length(); i++)
    {

        x = x + (s[i] - 'a')+1;
    }

    for (int i = 0; i < t.length(); i++)
        y = y + (t[i] - 'a')+1;

    cout << x << " " << y << endl;
    if (x == y)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}