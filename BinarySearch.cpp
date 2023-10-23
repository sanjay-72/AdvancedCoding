#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,key,i;
	cin>>n;
	int arr[n];
	for(i = 0;i<n;i++)
	cin>>arr[i];
	cin>>key;
	sort(arr,arr+n);
	for(i = 0;i<n;i++)
	cout<<arr[i]<<" ";
	int l = 0, r = n;
	while(l<r)
	{
		int mid = (l+r)/2;
		if(arr[mid] == key)
		{
			cout<<key<<" is present at location "<<mid+1;
			exit(0);
		}
		if(arr[mid]<key)
		l = mid+1;
		if(arr[mid]>key)
		r = mid-1;
	}
	cout<<"Element not found.";
}
