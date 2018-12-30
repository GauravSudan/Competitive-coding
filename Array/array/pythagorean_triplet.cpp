#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int N,i,j,k,flag=0,pos=0,s;
	cout<<"\nEnter size of array ";
	cin>>N;
	int *ar=new int[N];
	s=N*(N-1);
	cout<<s<<endl;
	int *result=new int[s];
	/*for(i=0;i<N;i++)
    {
        ar[i]=0;
    }
    for(i=0;i<N-1;i++)
    {
        result[i]=0;
    }
    for(i=0;i<N;i++)
    {
        cout<<ar[i];
    }
    for(i=0;i<N-1;i++)
    {
        cout<<result[i];
    }
*/


	for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
    for(i=0;i<N;i++)
    {
        cout<<"\narray element "<<ar[i];
    }
    cout<<endl;
    for(k=0;k<N;k++)
    {
        for(j=0;j<N;j++)
        {
            if(j!=k)
            {
                cout<<ar[k]<<"\t"<<ar[j];
                cout<<endl;
                //cout<<pow(ar[k],2)<<"\t"<<pow(ar[j],2);
                //cout<<endl;
                result[pos]=pow(ar[k],2)+pow(ar[j],2);
                cout<<result[pos]<<endl;
                pos++;
            }
        }
    }
    for(i=0;i<s;i++)
    {
        cout<<result[i]<<"\t";
    }

    for(i=0;i<s;i++)
    {
        int r=result[i];
        for(j=0;j<N;j++)
        {
            //int temp=pow(ar[j],2);
            cout<<r<<"\t"<<ar[j]<<"\t"<<pow(ar[j],2)<<endl;

            if(r==pow(ar[j],2))
            {
                cout<<"Entered";
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
        cout<<"\nYES";
    else
        cout<<"\nNO";



	return 0;
}
