#include <iostream>
#include<string.h>
using namespace std;

int main() {
char s1[20],s2[20];
int l1,l2,i=0,j,k=0,c=0,temp;
cout<<"\nEnter string 1 & 2 ";
cin.getline(s1,20);
cin.getline(s2,20);
l1=strlen(s1);
l2=strlen(s2);

int* ar=new int[l1];
//ar={0,0,0,0,0,0};
/*for(k=0;k<l1;k++)
{
    ar[k]=0;
}
*/
while(i<=l1)
{
    cout<<"\ni= "<<i<<"c= "<<c<<endl;
    /*if(i==l1-1)
    {
        cout<<"entered "<<c;
        k++;
        ar[k]=c;
    }*/
    cout<<"\n1";
    for(j=0;j<l2;j++)
    {
        if(s1[i]==s2[j])
        {
            cout<<"\n2";
            i++;
            c++;
            cout<<"\ni= "<<i<<endl;
        }
        else if (s1[i]!=s2[j] && s1[i-1]==s2[j-1])
        {
            cout<<"\n3";
            ar[k]=c;
            c=0;
            cout<<"value = "<<ar[k];
            k++;
        }
    }
    i++;
}
cout<<endl;
for(k=0;k<l1-1;k++)
    {

    for(j=0;j<l1;j++)
    {
        if(ar[j+1]>ar[j])
        {
            temp=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=temp;
        }
    }
    }

for(k=0;k<l1;k++)
{
    cout<<ar[k]<<"  ";
}

cout<<"\n"<<ar[0];
return 0;
}
