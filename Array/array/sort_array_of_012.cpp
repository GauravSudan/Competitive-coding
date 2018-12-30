#include <iostream>
using namespace std;
int main()
{
    int N=1,i,j,k,l,temp,T;
    cout<<"\nEnter no of cases";
    cin>>T;
    for(l=0;l<T;l++)
    {
    cout<<"\nEnter size of array ";
    cin>>N;
    int *ar=new int[N];
    for(i=0;i<N;i++)
    {

        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
    for(k=0;k<N-1;k++)
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
    }
return 0;
}
