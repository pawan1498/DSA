#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n , k ; 
    cin >> n >> k ; 
     int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0 ; 
    unordered_map <int , int> map ; 
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int  j = i+1; j < n; j++)
    //     {
    //         if( (arr[i] + arr[j])  == k )
    //         {
    //             count++;
    //         }
    //     }
        
    // }
    cout << count << endl ; 
    
}