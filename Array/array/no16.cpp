#include <iostream>
using namespace std;

int main() {
	int N,i,j,flag=1,pos=1;
	cout<<"\nEnter size of array ";
	cin>>N;
	int *ar=new int[N];
	for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
    while(pos<N-1)
    {
        flag=1;
        //cout<<"\n"<<pos;
        for(i=0;i<pos;i++)
        {
            if(ar[i]>ar[pos])
            {
                //cout<<endl<<pos<<" Entered";
                flag=0;
                //pos++;
                //cout<<pos<<endl;
                //break;
            }
        }

        for(i=pos+1;i<N;i++)
        {
            if(ar[i]<ar[pos])
            {
                //cout<<endl<<pos<<" Entered";
                flag=0;
                //pos++;
                //cout<<pos<<endl;
                //break;
            }
        }
        if(flag==1)
        {
            cout<<ar[pos];
            break;
        }

        //cout<<pos;
        pos++;
        //cout<<pos;

    }

    if(flag==0)
            cout<<endl<<"-1";


	return 0;
}
