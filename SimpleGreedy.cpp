#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,temp=0;
	cin>>n;
	int arr[n];
	vector<int> v;
	for(i = 0;i<n;i++) cin>>arr[i];
	for(i = 0;i<n;i+=2)
		temp += arr[i];
	int temp2 = 0;
	for(i = 1;i<n;i+=2)
		temp2 += arr[i];
	int ans = (temp>temp2)?temp:temp2;
	cout<<ans;
}
