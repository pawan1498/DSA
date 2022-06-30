// C++ code for k largest/ smallest elements in an array
#include <bits/stdc++.h>
using namespace std;

// Function to find k largest array element
void kLargest(vector<int> &v, int N, int k)
{
	// Implementation using
	// a Priority Queue
	priority_queue<int> pq;

	for (int i = 0; i < k; ++i)
	{
		pq.push(-v[i]);
	}

	for (int i = k; i < v.size(); i++)
	{
		if (-pq.top() < v[i])
		{
			pq.pop();
			pq.push(-v[i]);
		}
	}

	// Print the k largest element
	// while (!pq.empty())
	// {
	// 	cout << -pq.top() << " ";
	// 	pq.pop();
	// }
	cout << -pq.top();
}

// driver program
int main()
{
	// Given array
	vector<int> arr = {11, 3, 1, 78, 98, 100};
	// Size of array
	int n = arr.size();
	int k = 3;
	cout << k << " largest elements are : ";
	kLargest(arr, n, k);
	// cout<<k<<" smallest elements are : ";
	// kSmalest(arr, n, k);
}

// This code is contributed by Pushpesh Raj.
