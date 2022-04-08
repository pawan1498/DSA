#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> result ; 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    auto i = v.end();
    int max = INT_MIN;
    while (i != v.begin())
    {
        --i  ;
        if( max < *i){
            // cout << *i << " ";
            max = *i;
            result.push_back(max);
        }
    }
    reverse(result.begin(), result.end());
    for (auto x : result)
    {
        cout << x << " ";
    }
    
}