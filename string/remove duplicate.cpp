#include <iostream>
#include<string.h>
using namespace std;

int main() {
char s[20];
int ar[256],val,i,l;

cout<<"\nEnter string ";
cin.getline(s,20);

l=strlen(s);

for(i=0;i<256;i++)
{
    ar[i]=0;
}
for(i=0;i<l;i++)
{
    val=s[i];
    ar[val-1]+=1;
}
cout<<endl;
for(i=0;i<l;i++)
{
    val=s[i];
    if(ar[val-1]>1)
    {
       ar[val-1]=1;
    }
}
for(i=0;i<l;i++)
{
    val=s[i];
    if(ar[val-1]==1)
    {
        cout<<s[i];
        ar[val-1]=0;
    }
}
return 0;
}
