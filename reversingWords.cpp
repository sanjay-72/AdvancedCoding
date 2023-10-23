//To reverse string without using inbuilt functions
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s, temp;
	getline(cin,s);
	int words = 1;
	
	for(int i = 0;i<s.length();i++)
	{
		if(s[i] == ' ') words++;
	}
	
	string reversed[words];
	int x = 0;
	
	for(int i = 0; i< s.length(); i++)
	{
		if(s[i] == ' ')
		{
			reversed[x] = temp;
			temp = "";
			x++;			
		}
		else
		{
			temp += s[i];
		}
	}
	reversed[x] = temp;
	for(int i = words-1;i>=0;i--)
	{
		cout<<reversed[i]<<" ";
	}
}
