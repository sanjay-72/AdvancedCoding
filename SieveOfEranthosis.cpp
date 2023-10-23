//Sieve of Eranthesis
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 0; i < n+1; i++)
        arr[i] = -1;
    arr[0] = 0;
    arr[1] = 0;
    for(int i = 2; i < n+1; i++)
    {
        if(arr[i] == -1)
        {
            arr[i] = 1;
            for(int j = i*2; j < n+1; j+=i)
            {
                arr[j] = 0;
            }
        }
    }
    for(int i = 0; i < n+1; i++)
    {
        if(arr[i] == 1)
            cout<<i<<" ";
    }
}