#include <iostream>
using namespace std;

int main() {
	int N,i,j,k,start=0,size2,l;
	cout<<"\nEnter size of array ";
	cin>>N;
	cout<<"\nEnter size of sub array ";
	cin>>size2;
	int *ar=new int[N];
	int *ar1=new int[size2];

	for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
    for(k=0;k<=N/size2;k++)
    {
        //cout<<"\nSTART="<<start<<endl;
        j=size2-1;
       if(start+size2<=N)
       {
           //cout<<"\n ENTERED";

           for(i=start;i<size2+start;i++)
           {
               //cout<<"\n element :"<<ar[i];
               ar1[j]=ar[i];
               j--;
           }
           start=start+size2;
           //cout<<endl;
           for(l=0;l<size2;l++)
           {
                cout<<ar1[l]<<"\t";
           }
        //cout<<"\nSTART="<<start<<endl;
       }
       else
        {
            //cout<<"ENTERED";
           int *arlast=new int[N-start];
           j=N-start-1;
           //cout<<"\n"<<j;
           //cout<<"\n"<<start<<"\n";
          for(i=start;i<N;i++)
           {
               arlast[j]=ar[i];
               //cout<<"\n j= "<<arlast[j];
               j--;
           }

           for(int m=0;m<N-start;m++)
           {
                cout<<arlast[m]<<"\t";
           }
        }
    }
	return 0;
}
