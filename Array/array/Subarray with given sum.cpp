#include <iostream>
using namespace std;

int main() {
	int N,sum,s=0,flag=1,i,j=0;
	cout<<"\nEnter size of array ";
	cin>>N;
	int *ar=new int[N];
	for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
    cout<<"\nEnter sum ";
    cin>>sum;
    while(s!=sum)
    {
        s=0;
        flag=0;
        for(i=j;i<N;i++)
        {
            if(s<sum)
            {
                s+=ar[i];
            }
            else if(s>sum && flag==0)
            {
                j++;
                flag=1;
            }
            else if(s==sum)
            {
                cout<<j+1<<" "<<i;
                break;
            }
        }

    }


 return 0;
}
