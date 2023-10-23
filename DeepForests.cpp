#include<iostream>
#include<cstring>
using namespace std;
const int N=1010;
char a[N][N];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int n,ans;
bool vis[N][N];
void dfs(int x,int y)
{
vis[x][y]=true;
ans++;
for(int i=0;i<4;i++)
{
int nx=x+dx[i];
int ny=y+dy[i];
if(nx>=0&&nx<n&&ny>=0&&ny<n&&!vis[nx][ny]&&a[nx][ny]=='T')
{
dfs(nx,ny);
}
}
}
int main()
{
cin>>n;
memset(vis,false,sizeof(vis));
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cin>>a[i][j];
}
}
int res=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(!vis[i][j]&&a[i][j]=='T')
{
ans=0;
dfs(i,j);
res=max(res,ans);
}
}
}
cout<<res<<endl;
return 0;
}
