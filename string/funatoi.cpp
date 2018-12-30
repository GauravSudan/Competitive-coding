#include <iostream>
#include<string.h>
using namespace std;


int main() {
char s[20];
int val,intval=0,i,l,flag=0;

cout<<"\nEnter string ";
cin.getline(s,20);

l=strlen(s);

for(i=0;i<l;i++)
{
    if(s[i]>='0' && s[i]<='9')
    {
        val=s[i];
        val=val-48;
        intval*=10;
        intval=intval+val;
    }
    else
    {
        flag=1;
    }
}
if(flag==1)
{
    cout<<endl<<"-1";
}
else if(flag==0)
{
    cout<<endl<<intval;
}

return 0;
}
