#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int i,j,temp,comp,N,s;
	 cout<<"\nEnter size of array ";
    cin>>N;
    int *ar=new int[N];
    for(i=0;i<N;i++)
    {

        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
    for(j=0;j<N;j++)
    {

    for(i=0;i<N-1;i++)
    {
    temp=ar[i];
    if(temp>9)
    {
        temp=temp%10;
    }
    comp=ar[i+1];
    if(comp>9)
    {
        comp=comp%10;

    }
    if(comp>temp)
    {
        s=ar[i+1];
        ar[i+1]=ar[i];
        ar[i]=s;
    }
    }
    }
char ch[20];
    for(i=0;i<N;i++)
    {
        cout<<ar[i]<<"\t";
    }
    return 0;
}
