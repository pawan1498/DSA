#include<bits/stdc++.h>
using namespace std;
int strstr(string s, string x)
{
     for (int  i = 0; i < s.size(); i++)
     {
         int count = 0 ; 
         for (int j = i; j < x.size()+i; j++)
         {
             if( s[j] == x[j])
             count++;
         }
        //  cout << count << i<< endl ;
        //  cout << "xs=" << x.size();
         if( count = x.size())
         return 1 ; 
         
     }
     return 0 ; 
     
}
int main()
{
    int t ; cin >> t ; 
    while(t--){

        string s ,x;
        cin >> s >> x ;
        cout << strstr(s,x); 
        
    }
    return 0;
}