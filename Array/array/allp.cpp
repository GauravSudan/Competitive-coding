#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
int g[10][10],n,i,j,k;
cout<<"program for Floyd warshall (all pair shortest path)by: Tarun rawat\n\n";

cout<<"Enter number of vertices n= ";
cin>>n;
cout<<"Enter n*n adjacency matrix \n";
for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
      { cin>>g[i][j];
      }
  }
for(k=0;k<n;k++)
  {for(i=0;i<n;i++)
      {
       if (g[i][k]>0)
      {for(j=0;j<n;j++)
     {if(g[k][j]>0 && g[i][j]>(g[i][k]+g[k][j]))
       {g[i][j]=g[i][k]+g[k][j];
       }
     }
      }
      }
  }
cout<<"\nOutput : \n";
for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
      { cout<<g[i][j]<<" ";
      }
     cout<<"\n";
  }

getch();
return 0;
}
