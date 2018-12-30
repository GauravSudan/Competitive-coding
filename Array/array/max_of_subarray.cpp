#include <iostream>
using namespace std;

int main() {
int N,k,i,j,start=0,en,gr;
cout<<"\nEnter size of array ";
	cin>>N;
	cout<<"\nEnter size of sub-array ";
	cin>>k;
	int *ar=new int[N];
	for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
    cout<<endl;
    for(i=0;i<=N-k;i++)
    {

        en=start+k;
        gr=ar[start];
        for(j=start+1;j<en;j++)
        {
            if(ar[j]>gr)
            {
                gr=ar[j];
            }
        }
        start++;
        cout<<gr<<"\t";
    }

	return 0;
}
