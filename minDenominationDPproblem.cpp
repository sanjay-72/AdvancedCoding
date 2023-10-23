//minimum denomination coins problem.
#include<bits/stdc++.h>
using namespace std;
int dp[100] = {0};
int deno(int n, int arr[],int size)
{
	if(n == 0)
	{
		return 0;
	}
	
	if(dp[n] != 0)
	return dp[n];
	
	int ans = INT_MAX;
	for(int i = 0;i<size;i++)
	{
		if(n>=arr[i])
		{
			int subpro = deno(n - arr[i],arr,size);
			ans = min(ans, subpro+1);
		}
	}
	return dp[n] = ans;
}

int main()
{
	int n;
	cin>>n;
	int arr[] = {1,7,10};
	int size = 3;
	cout<<deno(n,arr,size);
}
