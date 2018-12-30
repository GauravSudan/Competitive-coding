#include <iostream>
using namespace std;

int main() {
	int N,i;
	cout<<"\nEnter size of array ";
	cin>>N;
	int *ar=new int[N];
	for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }

    for(i=1;i<N-1;i++)
    {
        if(ar[i-1]!=ar[i] && ar[i+1]!=ar[i])
            cout<<ar[i]<<endl;
    }
	return 0;
}
