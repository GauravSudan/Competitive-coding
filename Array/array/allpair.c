#include<iostream>
#include<conio.h>
using namespace std;
int min(int a,int b);
int cost[10][10],a[10][10],i,j,k,c;

main()
{
  int n,m;
  cout <<"enter no of vertices";
  cin >> n;
  cout <<"enter no od edges";
  cin >> m;
  cout<<"enter the\nEDGE Cost\n";
for(k=1;k<=m;k++)
{
cin>>i>>j>>c;
a[i][j]=cost[i][j]=c;
}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
if(a[i][j]== 0 && i !=j)
a[i][j]=31999;
}
for(k=1;k<=n;k++)
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
cout <<"Resultant adj matrix\n";
for(i=1;i<=n;i++)
{
for( j=1;j<=n;j++)
  {
  if(a[i][j] !=31999)
  cout << a[i][j] <<" ";
  }
cout <<"\n";
}
getch();
}
int min(int a,int b)
{
if(a<b)
return a;
else
return b;
}
