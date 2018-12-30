#include <iostream>
using namespace std;

int main() {
	int N,i=0,j=0,k,flag=0,countzero,countone,no=0;
	cout<<"\nEnter size of array ";
	cin>>N;
	int *ar=new int[N];
	for(k=0;k<N;k++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[k];
    }
    while(i<N)
    {
        countzero=0,countone=0;
        cout<<countzero<<"  "<<countone;
        if(ar[i]==0)
        {
            while(ar[i]==0)
            {
                countzero++;
                i++;
                cout<<"\nENtered 1"<<countzero;
            }
            cout<<"\ni= "<<i<<" j= "<<j<<endl;
            while(ar[i]==1)
            {


                    countone++;
                    i++;
                    cout<<"\nENtered 2";
                    if(countone>countzero)
                    {

                       no=2*countzero;
                       cout<<endl<<"BREAKING "<<no<<endl;
                       break;
                    }
                    if(countzero==countone)
                    {
                        flag=1;
                        cout<<"\nENtered 3";
                    }


            }
        if(countzero==countone && flag==1)
                    {

                        no+=2*countzero;
                        cout<<"\nno= "<<no;
                    }
        else
        {
            no=countzero;
            break;
        }
        cout<<"\n"<<countzero<<"  "<<countone<<endl;
    }
    }
    cout<<"\nCount = "<<no;
return 0;
}
