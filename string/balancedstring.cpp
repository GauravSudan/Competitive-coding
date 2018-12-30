#include <iostream>
#include<string.h>
using namespace std;

int main() {
 int temp,i=0,l,st=0,j;
 char ch[20],ar[20];
 cout<<"\nEnter String ";
 cin.getline(ch,20);
 l=strlen(ch);
 while(i<l)
 {

    if(ch[i]=='{')
        {
            ar[i]=ch[i];
            cout<<"\nReceived "<<ar[i]<<" st= "<<st;
            st++;
             i++;

        }
    else if(ch[i]=='(')
        {
            ar[i]=ch[i];
            cout<<"\nReceived "<<ar[i]<<" st= "<<st;
            st++;
             i++;
        }
      else if(ch[i]=='[')
        {
            ar[i]=ch[i];
            cout<<"\nReceived "<<ar[i]<<" st= "<<st;
            st++;
             i++;
        }

    else if(ch[i]=='}')
    {
    ar[i]=ch[i];
        temp=st;
        j=i-1;
        cout<<endl<<ar[1]<<endl;
        cout<<"\nReceived "<<ar[i]<<" st= "<<st<<" i="<<i<<" j="<<j;
        //cout<<"\nEntered 1"<<st<<" "<<temp<<" "<<j<<endl;
        while(temp==st && j>=0)
        {
            cout<<"\nEntered 2 "<<ar[i]<<" "<<ar[j]<<endl;
            if(ar[i]=='}' && ar[j]=='{')
            {
                cout<<"\nEntered 3"<<endl;
                st--;
            }
            j=j-2;
        }


         i++;
        //st--;
        }
        else if(ch[i]==')')
    {
    ar[i]=ch[i];
        temp=st;
        j=i-1;
        cout<<endl<<ar[1]<<endl;
        cout<<"\nReceived "<<ar[i]<<" st= "<<st<<" i="<<i<<" j="<<j;
        //cout<<"\nEntered 1"<<st<<" "<<temp<<" "<<j<<endl;
        while(temp==st && j>=0)
        {
            cout<<"\nEntered 2 "<<ar[i]<<" "<<ar[j]<<endl;
            if(ar[i]==')' && ar[j]=='(')
            {
                cout<<"\nEntered 3"<<endl;
                st--;
            }
            j=j-2;
        }


         i++;
        //st--;
        }
        else if(ch[i]==']')
    {
    ar[i]=ch[i];
        temp=st;
        j=i-1;
        cout<<endl<<ar[1]<<endl;
        cout<<"\nReceived "<<ar[i]<<" st= "<<st<<" i="<<i<<" j="<<j;
        //cout<<"\nEntered 1"<<st<<" "<<temp<<" "<<j<<endl;
        while(temp==st && j>=0)
        {
            cout<<"\nEntered 2 "<<ar[i]<<" "<<ar[j]<<endl;
            if(ar[i]==']' && ar[j]=='[')
            {
                cout<<"\nEntered 3"<<endl;
                st--;
            }
            j=j-2;
        }


         i++;
        //st--;
        }

 }
 if(st==0)
    cout<<"\nBALANCED";
 else
    cout<<"\nUNBALANCED";
 return 0;
}
