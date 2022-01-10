#include<iostream>
using namespace std;
int main(){
	int n ; 
	cin >> n ; 
	if(!( n & (n-1)))
	 cout << "n is power of two";
}
