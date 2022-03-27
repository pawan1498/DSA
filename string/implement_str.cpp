#include <bits/stdc++.h>
using namespace std;
int strstr(string s, string x)
{

    // cout << s << x;
    int m = s.length();
    int n = x.length();

    // cout << " m n " << m << " n " << n ;
    for (int i = 0; i <= m - n; i++)
    {
        int y = 0;
        for (int j = 0; j < n; j++)
        {
            y = j;
            if( i ==5 ){
                cout <<  "-----" << x[j] << s[i+j] <<endl;
            }
            if (x[j] != s[i + j])
                break;
        }

        cout << "y = " << y << "   "
             << "i " << i << endl;
        if (y == n-1)
        {
            return i;
        }
    }
    // cout << i <<endl ;
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s, x;
        cin >> s >> x;
        // cout << s << "   " << x << "\n";
        cout << strstr(s, x);
    }
    return 0;
}