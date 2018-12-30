#include <iostream>
#include<string.h>
using namespace std;

int main() {

    //Not equal pe strcmp=-1
    int i,j=0,l,flag=0;
    char a[20],b[20],bc[20],ba[20],ch;
    cout<<"\nEnter string a ";
    cin.getline(a,20);
    cout<<"\nEnter string b ";
    cin.getline(b,20);
    l=strlen(b);
    strcpy(bc,b);
    strcpy(ba,b);

    cout<<"\nbc="<<bc<<endl;
    cout<<"\nba="<<ba<<endl;
    cout<<strcmp(a,bc)<<endl;
    cout<<strcmp(a,ba)<<endl;
    if(strcmp(a,bc)==-1)
    {
        cout<<"\n1";
        for(i=0;i<2;i++)
        {
            j=0;
            ch=bc[0];
            while(j<l-1)
            {
             bc[j]=bc[j+1];
             j++;
            }
            bc[l-1]=ch;
            cout<<bc<<endl;
        }

        if(strcmp(a,bc)==0)
        {
            cout<<"\nSUCCESS";
            flag=1;
            //break;
        }
        if(strcmp(a,ba)==-1)
        {
            cout<<"\n21";


            for(i=0;i<2;i++)
            {
            j=l-1;
            cout<<j<<endl;
            ch=ba[j];
            cout<<ch<<endl;
            while(j>0)
            {
             ba[j]=ba[j-1];
             j--;
            }
            ba[0]=ch;
            cout<<ba<<endl;
            }
            if(strcmp(a,ba)==0)
            {
                flag=1;
                //break;
            }



            }
            else if(strcmp(a,ba)==0)
            {
                cout<<"\n22";
                    flag=1;
            }

    }
    else if(strcmp(a,bc)==0)
    {
        cout<<"\n12";
        flag=1;
    }



/*
    else if(strcmp(a,ba)==0 || strcmp(a,bc)==0)
    {cout<<"\n3";
        flag=1;
    }

*/
    cout<<"\nFlag = "<<flag;

return 0;
}
