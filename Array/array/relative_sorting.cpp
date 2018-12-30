#include <iostream>
using namespace std;
int main()
{
    int N=1,M=1,i,pos1=0,pos2=0,j,se,k,temp;

    cout<<"\nEnter size of array 1 ";
    cin>>N;
    int *ar1=new int[N];
    for(i=0;i<N;i++)
    {

        cout<<"\nEnter array 1 element ";
        cin>>ar1[i];
    }

     cout<<"\nEnter size of array 2 ";
    cin>>M;
    int *ar2=new int[M];
    for(i=0;i<M;i++)
    {

        cout<<"\nEnter array 2 element ";
        cin>>ar2[i];
    }
//cout<<"\nEntered 1";
    for(pos2=0;pos2<M;pos2++)
    {
  //      cout<<"\nEntered 2";
        for(i=0;i<N;i++)
        {
    //        cout<<"\nEntered 3";
            if(ar2[pos2]==ar1[i])
            {
      //          cout<<"\nEntered 4";
                se=ar1[i];
                for(j=i;j>pos1;j--)
                {
        //            cout<<"\nEntered 5";
                    ar1[j]=ar1[j-1];
                }
                ar1[pos1]=se;
          //      cout<<"\n"<<ar1[pos1]<<endl;
                pos1++;
            }
        }
    }


    for(k=pos1;k<N;k++)
    {

    for(j=k;j<N;j++)
    {
        if(ar1[j+1]<ar1[j])
        {
            temp=ar1[j+1];
            ar1[j+1]=ar1[j];
            ar1[j]=temp;
        }
    }
    }
    for(i=0;i<N;i++)
    {
        cout<<ar1[i]<<"\t";
    }
return 0;
}
