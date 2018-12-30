#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char st[100],ch;
    int i,j,l,wd=1,flag=1,k=0;
    cout<<"Enter String ";
    cin.getline(st,100);

    l=strlen(st);
    for(i=1;i<l;i++)
    {
        if(st[i]==' ')
        {
            wd++;
        }
    }
    int* wdloc=new int[wd];

    //cout<<wd<<endl;
    for(i=0;i<wd;i++)
    {
            wdloc[i]=0;
    }
    for(i=0;i<wd;i++)
    {
            //cout<<wdloc[i]<<" ";
    }
    cout<<endl;
    cout<<"wd="<<wd<<endl;
    wdloc[k]=0;
    for(i=1;i<l;i++)
    {
        if(st[i]==' ')
        {
            k++;
            wdloc[k]=i+1;
        }
    }
    cout<<"ENtered"<<endl;
    for(i=0;i<wd;i++)
    {
        cout<<wdloc[i]<<" ";
    }
    cout<<"ENtered"<<endl;
    for(i=0;i<wd;i++)
    {
        cout<<st[wdloc[i]]<<" ";
    }
    i=0;
    while(flag==1)
    {
        cout<<endl;
        ch=st[i];
        cout<<"= "<<ch<<endl;
        //cout<<st[wdloc[i]]<<endl;
        for(j=0;j<wd;j++)
        {
            //cout<<st[wdloc[j]]<<endl;
            if(st[wdloc[j]+i]==ch)
            {
                flag=1;
                cout<<st[wdloc[j]]<<wdloc[j]<<" ";
            }
            else if(st[wdloc[j]]!=ch)
                {
                    cout<<"Entered for "<<st[i]<<endl;
                    flag=0;
                }

        }
        i++;
    }
    cout<<"----------------------------------"<<endl;
    for(j=0;j<i-1;j++)
    {
        cout<<st[j];
    }


    return 0;
}
