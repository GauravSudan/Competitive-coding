#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[20];
    int i=0,j=0,k=0,c=0,f=0;
    int ar[20];

    cout<<"\nEnter a string ";
    cin.getline(ch,20);

    for(i=0;i<20;i++)
    {

        ar[i]=0;
    }



    int n = strlen(ch);
    for(i=0;i<n-1;i++)
    {
        if(ch[i]==ch[i+1])
        {
            f=1;
            if(ar[j-1]!=i)
            {
                ar[j]=i;
                j++;
            }
            ar[j]=i+1;
            j++;
        }

    }
    cout<<"1\n";
    for(i=0;i<n;i++)
    {
        cout<<ch[i];
    }
    cout<<"1\n";
    for(i=0;i<n;i++)
    {
        cout<<ar[i];
    }
    j=0;
    for(i=0;i<n;i++)
    {

        if(i==ar[j] && f==1)
        {
            ch[i]='.';
            j++;
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<ch[i];
    }

     for(i=0;i<n;i++)
    {
        k=0;
        if(ch[i]=='.')
        {
            cout<<endl<<"i="<<i;

            cout<<endl<<"New Cycle";
            k=i;
            c++;
            cout<<"\nk="<<k;
            for(k=i;k<n-1;k++)
            {
                cout<<endl;
                //cout<<ch[k]<<"\t"<<ch[k+1];
                for(int z=0;z<n;z++)
                {
                    cout<<ch[z];
                }
                ch[k]=ch[k+1];
                cout<<endl;
                //cout<<"\n"<<ch[k]<<"\t"<<ch[k+1];
                //t"<<ch[k+1];
                for(int z=0;z<n;z++)
                {
                    cout<<ch[z];
                }
                //k++;
                cout<<"\nk="<<k;
            }
            //n--;
   // c++;
            cout<<"\nn="<<n;
        }
    }
    for(i=0;i<n;i++)
    {
        k=0;
        if(ch[i]=='.')
        {
            cout<<endl<<"i="<<i;

            cout<<endl<<"New Cycle";
            k=i;
            c++;
            cout<<"\nk="<<k;
            for(k=i;k<n-1;k++)
            {
                cout<<endl;
                //cout<<ch[k]<<"\t"<<ch[k+1];
                for(int z=0;z<n;z++)
                {
                    cout<<ch[z];
                }
                ch[k]=ch[k+1];
                cout<<endl;
                //cout<<"\n"<<ch[k]<<"\t"<<ch[k+1];
                //t"<<ch[k+1];
                for(int z=0;z<n;z++)
                {
                    cout<<ch[z];
                }
                //k++;
                cout<<"\nk="<<k;
            }
            //n--;

            cout<<"\nn="<<n;
        }
    }
    cout<<endl<<"...........................................................";

     for(i=0;i<n-c;i++)
    {
        cout<<ch[i];
    }


    return 0;
}
