#include <bits/stdc++.h>
using namespace std;
int is_balance(string s , int n){
    unordered_map<char , int > symbol ;
    symbol = {{'(',1}, {'{', 2 }, {'[',3},{'(',-1}, {'{', -2 }, {'[',-3} };
    // cout << symbol.begin()
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        is_balance(s, s.size());

    }
}