#include <iostream>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    char ar[10];
    int l,i,j,temp=0,pos;
    cout<<"\nEnter string ";
    cin.getline(ar,10);
    l=strlen(ar);
    //cout<<"\n"<<l<<endl;
    for(i=0;i<24;i++)
    {
        j=0;
        while(j<l)
        {
            pos=rand()%l;
            if(temp!=pos)
            {
                cout<<ar[temp];
                temp=pos;
                j++;
            }
        }
        cout<<"\t";

    }



return 0;
}
