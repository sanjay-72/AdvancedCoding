#include<iostream>
using namespace std;
int main()
{
int n,k,ans=-1;
cout<<"Enter size of array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter elements of array"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Enter element for searching"<<endl;
cin>>k;
for(int i=0;i<n;i++)
{
if(arr[i]==k)
{
ans=i;
break;
}
}
if(ans!=-1)
cout<<"The element "<<k<<" is present at index "<<ans;
else
cout<<"The element "<<k<<" is not there in the array";
return 0;
}
