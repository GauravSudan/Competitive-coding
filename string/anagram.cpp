#include <iostream>
#include<string.h>
using namespace std;

int main() {
char s1[20],s2[20];
int l1,l2,i=0,j,flag=1,k=0;

cout<<"\nEnter string 1 ";
cin.getline(s1,20);

cout<<"\nEnter string 2 ";
cin.getline(s2,20);

l1=strlen(s1);
l2=strlen(s2);
cout<<l1<<"  "<<l2<<endl;
int* ar=new int[l1];
for(i=0;i<l1;i++)
    {
        ar[i]=0;
    }
cout<<endl;
for(i=0;i<l1;i++)
    {
        cout<<s1[i]<<"\t";
    }
cout<<"s1="<<s1<<" s2="<<s2;
if(l1==l2)
{i=0;
while(k<l1)
{


cout<<"\n2\n";
    for(j=0;j<l1;j++)
    {

        if(s1[i]==s2[j] && ar[j]==0)
        {
            cout<<s1[i]<<" "<<s2[j]<<endl;
            ar[j]=1;
            i++;
        }
    }


k++;
}
 for(i=0;i<l1;i++)
    {
        cout<<ar[i]<<"\t";
    }
}
for(i=0;i<l1;i++)
    {
        if(ar[i]!=1)
        {
            cout<<"\n3";
            flag=0;
        }
    }
if(l1==l2 && flag==1)
{
    cout<<"\nAnagram";
}

else if(l1!=l2 || flag==0)
{
    cout<<"\nNot Anagram";
}


for(i=0;i<l1;i++)
{

}

return 0;
}
