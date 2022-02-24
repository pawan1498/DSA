#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int n = s.size();
    cout << n;
    for (int i = 0; i < n; i++)
    {
        char temp = s[i];
        int count = 0;
        // cout << temp;
        for (int j = 0; j < i; j++)
        {
            if (s[j] == temp)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << temp;
        }
    }
    return 0;
}

// another sol in single loop 

// unorder_set<string> m ; 
// for (int i = 0; i < n; i++){
//     if( m.find(s[i])  == m.end()){
//         ans = ans + s[i];
//         m.insert(s[i]);
//     }
// }
