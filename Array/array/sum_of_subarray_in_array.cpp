#include <iostream>
using namespace std;

int main() {
    int N=1,S=0,i,j,sum=0,start=0,end,flag=0;
    cout<<"\nEnter size of array ";
    cin>>N;
    cout<<"\nEnter sum of array ";
    cin>>S;
    int *ar=new int[N];
    for(j=0;j<N;j++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[j];
    }
    while(flag==0)
    {
    for(i=start;i<N;i++)
    {
        sum+=ar[i];
        cout<<sum<<endl;;
        if(sum==S)
        {
            end=i+1;
            start=start+1;
            cout<<end<<"\t"<<start;
            flag=1;
            break;
        }
        else if(sum>S)
        {
            cout<<"Resetting"<<endl;
            i=N;
            start++;
            sum=0;
        }
    }
    }
    cout<<"\nStart pos:"<<start;
    cout<<"\nEnd pos:"<<end;






	return 0;
}
