#include <iostream>
using namespace std;

int main() {
	int N,i,j,l,r,u,d,ld=0,rd;
	//cout<<"\nEnter size of array ";
	//cin>>N;
	//int *ar=new int[N][N];
	N=4;
	int ar[N][N];

	for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cout<<"\nEnter array element "<<i<<","<<j<<" ";
            cin>>ar[i][j];
        }
    }
    cout<<endl<<"Array entered is :"<<endl;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cout<<ar[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    rd=N-1;
    while(ld<rd)
    {
        cout<<ar[ld][ld]<<"\t";
        for(r=ld+1;r<rd;r++)
        {
            cout<<ar[ld][r]<<"\t";
        }
        cout<<ar[ld][rd]<<"\t";
        for(d=ld+1;d<rd;d++)
        {
            cout<<ar[d][rd]<<"\t";
        }
        cout<<ar[rd][rd]<<"\t";
        for(l=rd-1;l>ld;l--)
        {
            cout<<ar[rd][l]<<"\t";
        }
        cout<<ar[rd][ld]<<"\t";
        for(u=rd-1;u>ld;u--)
        {
            cout<<ar[u][ld]<<"\t";
        }
        ld++;
        rd--;

    }
    if(N%2!=0)
        cout<<ar[ld][ld];




	return 0;
}
