#include<iostream>
#include<vector>
using namespace std;

vector<int>board[101];
int n;

void display()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<"  ";
        }
        cout<<endl;
    }
}

bool isSafe(int x, int y)
{
    if(x >= 0 && x < n && y >= 0 && y < n)
    {
        // Top right diagonal
        for(int i = 0; (x-i >= 0 && y+i < n); i++)
        {
            if(board[x-i][y+i] != 0)
                return false;
        }
        // Top left diagonal
        for(int i = 0; (x-i >= 0 && y-i >= 0); i++)
        {
            if(board[x-i][y-i] != 0)
                return false;
        }
        // Top straight
        for(int i = 0; (x-i >= 0); i++)
        {
            if(board[x-i][y] != 0)
                return false;
        }
        return true;
    }
    return false;
}


void giveKnights(int row) {
    if(row >= n)
    {
        display();
        exit(0);
    }

    for(int i = 0; i < n; i++)
    {
        if(isSafe(row, i))
        {
            board[row][i] = 1;
            giveKnights(row+1);
            board[row][i] = 0;
        }
    }
}

int main()
{
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            board[i].push_back(0);
        }
    }
    giveKnights(0);
}