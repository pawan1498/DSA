#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        matrix.push_back(v);
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }


    
}