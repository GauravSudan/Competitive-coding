#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char st[20],x[10];
    int ls,lx,i,xpos=0,flag=0,j;
    cout<<"\nEnter string st ";
    cin.getline(st,20);

    cout<<"\nEnter string X ";
    cin.getline(x,10);

    ls=strlen(st);
    lx=strlen(x);

    for(i=0;i<ls;i++)
    {
        cout<<st[i]<<" "<<i<<endl;
        xpos=0;

        if(st[i]==x[xpos])
        {
              j=i;
            cout<<"\nNEW";
            while(xpos<lx)
            {
                  cout<<"\n1";
                //j=i;
                if(st[j]==x[xpos])
                {
                    cout<<"\n2 "<<st[j]<<" "<<x[xpos]<<" "<<xpos<<endl;
                    j++;
                    xpos++;
                    flag=1;
                    // cout<<"\n2 "<<st[j]<<" "<<x[xpos]<<" "<<xpos;
                }
                else
                {
                    cout<<"\n3 "<<st[j]<<" "<<x[xpos]<<endl;
                    xpos++;
                    flag=0;
                    cout<<"\nRESET";

                }

            }
            if(xpos==lx && flag==1)
            {
                cout<<"\n"<<i;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"\n"<<"-1";
    }




    return 0;
}
