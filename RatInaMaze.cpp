#include<iostream>
using namespace std;
int n;
int map[10001][10001];

bool isPossible(int x, int y)
{
    if(x >= 0 && x < n && y >= 0 && y < n && map[x][y] == 1)
        return true;
    return false;
}

bool isRouteAvailable(int x, int y)
{
    if(x == n-1 && y == n-1)
        return true;

    if(isPossible(x, y))
    {
        return (isRouteAvailable(x+1, y) || isRouteAvailable(x, y+1));
    }
}

int main()
{
    cout<<"Enter the side of Square matrix (N) : ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>map[i][j];
        }
    }
    if(isRouteAvailable(0 , 0))
        cout<<"Yes route for going out is there.";
    else
        cout<<"No, The mage doesn't have any opening.";
}