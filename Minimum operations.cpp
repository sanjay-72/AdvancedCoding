//Minimum operations to make a number to one by using operations /2 or /3  or -1
#include<bits/stdc++.h>
using namespace std;

int dp[100] = {0};
int minOperations(int n)
{
	//Base Case
	if(n == 1)
	{
		return 0;
	}
	
	if(dp[n] != 0)
	return dp[n];
	
	int op1 = INT_MAX;
	int op2 = INT_MAX;
	int op3 = INT_MAX;
	
	if(n%3 == 0)
	{
		op1 = minOperations(n/3);
	}
	if(n%2 == 0)
	{
		op2 = minOperations(n/2);
	}
	op3 = minOperations(n-1);
	
	int ans = min(min(op2,op1),op3)+1;
	return dp[n] = ans;
	
	
}

int main()
{
	int n;
	cin>>n;
	cout<<minOperations(n);
}
