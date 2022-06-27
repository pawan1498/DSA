#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    vector<int> arr = {1, 2, 3, 5};
    // Your code goes here

    {
        int min = *min_element(arr.begin(), arr.end());
        int max = *max_element(arr.begin(), arr.end());
        // cout << "min =" << min << " max =" << max << endl;
        // cout << max - min << endl;
        if ((max - min) != n - 1)
        {
            cout << "----------";
            if ((max - min) < n)
                cout << max + 1;
            else
                cout << min - 1;
        }
        else
        {
            int res = 0;
            int m = n;
            // cout << "m =" << m <<endl ;
            int exp_res = (m * (min + max)) / 2;
            for (auto &it : arr)
            {

                // Print the values
                res = res + it;
            }
            // cout << "expectd = " << exp_res << endl;
            // cout<<"result = " << res << endl;

            cout << (exp_res - res);
        }
    }
}

// an = a+ (n-1)d