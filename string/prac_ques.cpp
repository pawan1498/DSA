#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> x;
        for (int i = 0; i < s.size(); i++)
        {
            x[s[i]] = int(s[i]);
        }

        int check = 0, count = 0;
        for (auto i = x.begin(); i != x.end(); i++)
        {

            cout << i->first
                 << " : "
                 << i->second << '\n';

            if (i->first == 'a')
            {

                check = 1;
            }
            if (check)
            {
                count++;
            }

            if (i->first == 'z')
            {
                check = 0;
            }
        }
        cout << count << endl;
        if (count == 26)
        {
            cout << "true";
            return 1;
        }
        else
        {
            cout << "false";
            return 0;
        }
    }
    return 0;
}