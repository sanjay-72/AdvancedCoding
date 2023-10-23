// Count the set bits in an integer
#include<iostream>
using namespace std;

int main()
{
	int num, ones = 0;
	cin>>num;
	while(num>0)
	{
		ones += num&1;
		num = num>>1;
	}
	cout<<ones;
}
