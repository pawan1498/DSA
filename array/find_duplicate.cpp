#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ; 
    // char a;
    cin >> n ; 
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int , int > m; 
    for(int i = 0 ; i< n ; i++){
        m[arr[i]]++;
        if( m[arr[i]] == 2 ) {
            cout << arr[i]<< ",";
        }
    }
    

    // for(auto x : m ){
    //     // cout << x.first << " " << x.second << endl;
    //     if( x.second > 1 ){
    //         cout << x.first << " ";
    //     }
    // }

    
    
}