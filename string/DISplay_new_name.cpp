#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string name[n];
        for (int i = 0; i < n; i++)
            cin >> name[i];

        int max = 0, curr_size = 0, max_count = 0, count = -1;
        for (int i = 0; i <n; i++)
        {
             curr_size = 0;
            for (int j = 0; j < name[i].size(); j++)
            {
                curr_size++;
            }
            if (max < curr_size)
            {
                max = curr_size;

                max_count = count + 1;
                count++;
            }
            else
                count++;
        }
        // cout << count;
        // cout << max_count<<endl;
        cout << name[max_count];
    }
    return 0;
}