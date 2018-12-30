#include <iostream>
using namespace std;

int main() {
	int N,pos=1,temp,i;
	cout<<"\nEnter size of array ";
	cin>>N;
	int *ar=new int[N];
	for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
	while(pos<N)
    {
        if(ar[pos]<ar[pos-1])
        {
            temp=ar[pos];
            ar[pos]=ar[pos-1];
            ar[pos-1]=temp;
        }

        if(ar[pos]<ar[pos+1])
        {
            temp=ar[pos];
            ar[pos]=ar[pos+1];
            ar[pos+1]=temp;
        }
        pos=pos+2;
    }
    for(i=0;i<N;i++)
    {
        cout<<"\t"<<ar[i];
    }



	return 0;
}
