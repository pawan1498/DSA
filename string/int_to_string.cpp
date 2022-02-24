#include<bits/stdc++.h>
#include<string>

using namespace std;
int main()
{
    string s = "0032340061023";
    int n = s.size();
	    int m = n/2; 
	    int left = 0 , right =0  ;
	    for(int i =0 ; i<m ; i++){
	       left+= int(s[i]); 
	    }
	    for(int i = m+1 ; i<=n; i++){
	        right+= int(s[i]);
	    }
	    
        cout << left << endl ; 
        cout << right<< endl;
        if( left == right){
            cout << "1";
        }
        else{
            cout << "0";
        }
	    // return left == right ? 0:1;
	    // code here
}