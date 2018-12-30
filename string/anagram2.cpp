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
//cout<<l1<<"  "<<l2<<endl;
cout<<endl;

cout<<"s1="<<s1<<" s2="<<s2;
if(l1==l2)
{i=0;
while(k<l1)
{
cout<<s1<<" "<<s2<<endl;

cout<<"\n2\n";
    for(j=0;j<l1;j++)
    {

        if(s2[j]!='.' && s1[i]==s2[j])
        {
            //cout<<s1[i]<<" "<<s2[j]<<endl;
            s1[i]='.';
            s2[j]='.';
            i++;
        }
    }


k++;
}
 for(i=0;i<l1;i++)
    {
        cout<<s2[i]<<"\t";
    }
}
for(i=0;i<l1;i++)
    {
        if(s2[i]!='.')
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
