#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i]<< " ";
    }
    cout <<endl;
    
}
int main()
{
    pair<int , int > p ; 
    // p = make_pair(2,6);
    p = {32,90};
    cout << p.second<<endl;


    // vector
    vector<int> v ; 
    
    // insertion 
    int n ; cin>>n;
    for (int  i = 0; i < n; i++)
    {
        int x ; cin>>x;
        v.push_back(x);
    }
    printvec(v);
    return 0;
}