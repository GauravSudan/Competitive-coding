#include <iostream>
#include<string.h>
using namespace std;


int main() {
char s[20];
int ar[256],val,i,j,k=0,l,freq=0,freqd=0,flag=1;

cout<<"\nEnter string ";
cin.getline(s,20);

l=strlen(s);
int* m=new int[l];

for(i=0;i<26;i++)
{
    //cout<<"\n1\n";
    ar[i]=0;
}
for(i=0;i<l;i++)
{
    //cout<<"\n1\n";
    m[i]=0;
}
int z;

cout<<endl;

for(i=0;i<l;i++)
{
    //cout<<"i="<<i<<endl;
    val=s[i];
    if(ar[val-97]==0)
    {
       // cout<<"Entered for i="<<i<<endl;
        ar[val-97]=1;
        freqd++;

    }
    else if(ar[val-97]!=0)
    {
        freqd=0;
        freqd++;

//cout<<"xnxnxn i="<<i<<endl;

        for(j=0;j<26;j++)
        {
            freq+=ar[j];
        }
      //  cout<<endl<<freq<<endl;
        for(j=0;j<26;j++)
        {
            ar[j]=0;
        }


        ar[val-97]=1;
        m[k]=freq;
        //cout<<endl<<m[k]<<endl;
        freq=0;
        k++;
    }
    if(i==(l-1))
    {
        m[k]=freqd;
        freqd=0;
        k++;
    }
}


flag=m[0];
for(i=1;i<l;i++)
{
    if(m[i]>flag)
    {
        flag=m[i];
    }
}
cout<<endl<<flag;

return 0;
}
