#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> words;
    int n;
    cin >> n;
    int temp = n;
    while (temp--)
    {
        string s;
        cin >> s;
        words.push_back(s);
    }

    int ans = 0;

    unordered_map<string, vector<bool>> mp;
    // vector<bool> element;
    for (auto word : words)
    {
        if (mp[word].size() == 26)
            continue;
        mp[word] = vector<bool>(26, 0);
        for (auto _char : word)
        {
            mp[word][_char - 'a'] = 1;
            // cout << word << ' ' << _char - 'a' << '\n';
        }
    }

    for (int i = 0; i < words.size() - 1; i++)
    {
        for (int j = i + 1; j < words.size(); j++)
        {
            bool flag = true;
            for (int k = 0; k < 26; k++)
            {
                if (mp[words[i]][k] && mp[words[j]][k])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans = max(ans, int(words[i].size() * words[j].size()));
                // cout << words[i] <<' ' << words[j]<<'\n';
            }
        }
    }

    // return ans;

    // for (int i = 0; i < words.size(); i++)
    // {

    //     string s1 = words[i];
    //     // cout << s1 << endl;
    //     for (int j = 0; j < words.size(); j++)
    //     {
    //         string s2 = words[j];
    //         // cout << s2 << endl;
    //         bool flag = true;
    //         for (int k = 0; k < s1.size(); k++)
    //         {
    //             for (int l = 0; l < s2.size(); l++)
    //             {
    //                 if (s1[k] == s2[l])
    //                 {
    //                     flag = false;
    //                     break;
    //                 }
    //             }
    //         }
    //         // cout << flag << endl;
    //         if (flag)
    //         {
    //             int p = s1.size() * s2.size();
    //             ans = max(ans, p);
    //         }
    //     }
    // }
    cout << ans << endl;
}