//Q3.Great Forests
//Let us imagine a field as a 2D plane. Each cell is either water 'W' or a tree 'T'. A forest is a collection of connected trees. Two trees are connected if they share aside. That is, if they are adjacent to each other. Your task is to print the size of the largest forest for the given information about the field. The size of a forest is the number of trees in it. Look at the example, for a clear understanding.
//Format:
//Input:
//First-line contains the size of the matrix N. The next N lines contain N characters each, either 'W' or 'T'.
//Output:
//Print the size of the biggest forest.
//Constraint:
//1 <= N <= 1000

#include<bits/stdc++.h>
using namespace std;
int count=0;
int n;
char mtr[1000][1000];
void count_adj(int i,int j)
{
    if(i<0 || j<0 || i>n || j>n)
     return ;
    if(mtr[i][j]=='t')
    {
        mtr[i][j]='w';
        ::count++;
        count_adj(i-1,j);
        count_adj(i+1,j);
        count_adj(i,j+1);
        count_adj(i,j-1);
    }
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
     cin>>mtr[i];
    int max_count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(mtr[i][j]=='t')
            {
                count_adj(i,j);
                if(max_count< ::count)
                 max_count= ::count;
                ::count=0;
            }
        }
    }
    cout<<max_count;
    return 0;
}
