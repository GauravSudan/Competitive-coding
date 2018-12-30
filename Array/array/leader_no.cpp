#include <iostream>
using namespace std;

int main() {
	int N,i,j,gr;
	cout<<"\nEnter size of array ";
	cin>>N;
	int *ar=new int[N];
	for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
	for(i=0;i<N;i++)
    {
        gr=ar[i];
        for(j=i+1;j<N;j++)
        {
            if(ar[j]>ar[i])
            {
                gr=ar[j];
            }

        }
        if(ar[i]==gr)
        {
            cout<<ar[i]<<"\t";
        }
    }
   // cout<<ar[N-1];


	return 0;
}
