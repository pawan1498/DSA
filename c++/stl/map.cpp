#include<iostream>
using namespace std;
#include<string>
#include<map>

int main(){

    map<string , int > marks ; 
    marks["pawan"] = 98; 
    marks["guru"] = 60; 
    marks["rahul"] = 2; 

    map<string , int > :: iterator itr ; 
    for(itr = marks.begin() ; itr != marks.end(); itr++)
    {
        cout << itr->second<< '\t' << itr->second<<'\n';
    }
    return 0 ;
}
