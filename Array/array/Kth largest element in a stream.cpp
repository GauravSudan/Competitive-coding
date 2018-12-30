#include <iostream>
using namespace std;
int main()
{
    int N=1,i,j,k,l,temp,n,m=0;

    cout<<"\nEnter size of array ";
    cin>>N;
    int *ar=new int[N];
    for(i=0;i<N;i++)
    {

        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
    cout<<"\nEnter value of k ";
    cin>>k;
    for(n=0;n<N-1;n++)
    {

    for(j=0;j<N;j++)
    {
        if(ar[j+1]<ar[j])
        {
            temp=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=temp;
        }
    }
    }
    for(i=0;i<N;i++)
    {
        cout<<ar[i]<<"\t";
    }
    k=k-1;
    cout<<endl;
    while(m<N)
    {
        if((m-k)<0)
        {
            cout<<"-1"<<"\t";
            m++;
        }
        else
        {
            cout<<ar[m-k]<<"\t";
            m++;
        }
    }



return 0;
}
