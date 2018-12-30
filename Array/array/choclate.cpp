#include <iostream>
using namespace std;

int main() {
	int N,m,start=0,tempd,k,i,j,l=0,n,temp,diff,z=0;
	cout<<"\nEnter size of array ";
	cin>>N;
	int *ar=new int[N];
	for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }

    cout<<"\nEnter no of students ";
    cin>>m;


    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(ar[j]<ar[i])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }

    for(i=0;i<N;i++)
    {
        //cout<<ar[i]<<"\t";
    }
//cout<<"\nDone";





//cout<<ar[m-1]<<" "<<ar[0];
    tempd=ar[m-1]-ar[0];
   // cout<<"\n"<<tempd;
    int *ard=new int[m];
    j=0;
    for(k=0;k<=N-m;k++)
    {
       // j--;
        for(i=start;i<m+start;i++)
        {

            //ard[j]=ar[i];
         //   cout<<"\n ar="<<ar[i];
         //   cout<<"\n i="<<i;

        }
        i--;
       // cout<<"\nI after :"<<i;
       // cout<<"\n"<<ar[i]<<"\t"<<ar[i-(m-1)]<<endl;
        diff=ar[i]-ar[i-(m-1)];
        ard[j]=diff;
        j++;
      //  cout<<"\n diff "<<diff<<endl<<endl;
        start++;
        if(diff<tempd)
        {
           // cout<<"\nEntered";
            tempd=diff;
            start=i;

        }
    }
  //  cout<<endl;
cout<<"\n"<<tempd<<"\n";

    return 0;
}
