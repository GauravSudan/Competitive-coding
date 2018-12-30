#include<iostream>
using namespace std;
int main()
{
    int N,i,j,flag=0,maxpos=0;
    cout<<"\nEnter size of array ";
    cin>>N;
    int* ar=new int[N];
    for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
    j=0;
    int maxe=ar[0];
    for(i=1;i<N;i++)
    {
        if(ar[i]>maxe)
        {
            maxe=ar[i];
            maxpos=i;
        }
    }
    while(j<=N)
    {
        //cout<<"\nj="<<j;
        flag=0;
        for(i=j+1;i<=N;i++)
        {
            if(ar[i]>ar[j] && flag==0)
            {
                flag=1;
                 if(flag==1)
                {
                cout<<ar[i]<<"  ";
                }
            }

        }
        if(j==N)
            {
                cout<<"-1"<<" ";
            }
        if(j==maxpos && maxpos!=(N-1))
            {
                cout<<"-1"<<" ";
                maxpos=-1;
            }

        j++;
        }


    return 0;
}
