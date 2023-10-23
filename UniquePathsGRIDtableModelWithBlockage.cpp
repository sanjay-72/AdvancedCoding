#include<bits/stdc++.h>
using namespace std;

int uniquePaths(int m,int n, int x, int y)
{
	int dp[m][n];
		
	for(int i = 0;i<m;i++)
		for(int j = 0;j<n;j++)
		{
			dp[i][j] = 0;
		}
	for(int i = 0;i<n;i++)
	{
		if(i == y)
		break;
		else
		dp[0][i] = 1;
	}
		
	for(int i = 0;i<m;i++)
	{
		if(i == x)
		break;
		else
		dp[0][i] = 1;
	}
	
	for(int i = 1;i<m;i++)
	{
		for(int j = 1;j<n;j++)
		{
			if(i == x && j == y)
			{
				dp[i][j] = 0;
			}
			else
			dp[i][j] = dp[i-1][j]+dp[i][j-1];
		}
	}
	return dp[m-1][n-1];
}

int main()
{
	cout<<uniquePaths(3,3,1,1);
}
