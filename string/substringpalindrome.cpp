#include <iostream>
#include <string.h>
using namespace std;

int main() {
	//code
	char ch[20];
	int i=0,j=0,pos=0,flag=0,c=0,k=0;
	cout<<"\nEnter a string ";
	cin.getline(ch,20);
	int n=strlen(ch),en=n-1;
	cout<<"t"<<pos<<"\t"<<en<<endl;
	//while(i<=n/2 && en>=0)
	while(k<10)
    {
        cout<<"\n k="<<k<<endl;
        for(i=pos,j=en;i<=n/2;)
        {
            if(ch[i]==ch[j])
            {
                i++;
                j--;
            cout<<"\n2";
            }
            else
                {
            pos++;
            i=pos;
            j=n-1;
            cout<<"\n3";
            if(i>n/2)
            {
                cout<<"\n4";
                en--;
                pos=0;
                j=en;
                i=pos;
                c++;
               // n=en;
                flag=1;
                cout<<endl;
                cout<<"\t"<<en<<"\t"<<pos<<"\t"<<j<<"\t"<<i<<"\n";

            }
            }
            k++;
        }
cout<<endl;
if(flag==1)
{
    for(i=pos;i<n;i++)
        {
           // cout<<"\n4";
            cout<<ch[i];
        }
}
else
        for(i=pos;i<n;i++)
        {
           // cout<<"\n4";
            cout<<ch[i];
        }
    }
	return 0;
}
