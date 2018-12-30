#include <iostream>
using namespace std;

int main() {
	int N,i,j,no=1,pos=1,temp,print=1,sell2;
	cout<<"\nEnter no of days ";
	cin>>N;
	int *ar=new int[N];
	for(i=0;i<N;i++)
    {
        cout<<"\nEnter stock price ";
        cin>>ar[i];
    }
    for(i=0;i<N;i++)
    {
        if(ar[i]<ar[0])
        {
            no++;
        }
    }
    int *buy=new int[no];
    int *sell=new int[no];
    temp=ar[0];
    for(j=1;j<N;j++)
    {
        if(ar[j]>temp)
        {
            sell2=j;
        }
        if(ar[j]<temp)
        {
            break;
        }
    }
  if(j!=1)
  {
     cout<<"\t( 0"<<" "<<sell2<<" )";
  }
    for(i=1;i<N;i++)
    {
        if(ar[i]<temp)
        {
            buy[pos]=i;
            pos++;

        }

        if(ar[i]>temp)
        {
            sell[pos-1]=i;
        }
    }
    //print<<"\nEntered";
//cout<<"\nEntered";
    //cout<<pos<<endl;

    for(i=1;i<pos;i++)
    {
        cout<<"\t( "<<buy[i]<<" "<<sell[i]<<" )";
    }
	return 0;
}
