#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n)
{
    int low = 0;
    int high = n - 1;
    int count = 0;
    while (low <= high)
    {
        if (str[low] != str[high])
        {
            count++;
        }
        low++;
        high--;
    }
    // count = 2 * count;
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str ; 
        cin >> str ; 
        cout << str.size()<<endl;

       cout << minDeletions(str , str.size());
    }
    return 0;
}