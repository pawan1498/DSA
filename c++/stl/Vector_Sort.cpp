#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n ; 
    cin >> n ; 
    vector<int> vec;
    for(int i = 0 ; i<n ; i++){
        int x ; 
        cin >> x;
        vec.push_back(x);
    }
    
    sort(vec.begin(),vec.end());
    for(auto i = vec.begin(); i != vec.end();i++){
        cout << *i << " ";
    }

}