#include <iostream>
#include<string.h>
using namespace std;

int main()
{
int val=0,i=0,l;
char ch[20];
cout<<"\nEnter a roman value ";
cin.getline(ch,20);

l=strlen(ch);
while(i<l)
{
    if(ch[i]=='I')
    {
        val++;
        i++;
    }
    else if(ch[i]=='V')
    {
        if(ch[i]=='V' && ch[i-1]=='I')
        {
            if(l>2)
            {
            val--;
            val=val+4;
            i=i+2;
            }
            else
            {
                val=4;
                i=i+2;

            }
             //val--;
        }
        else if(ch[i]=='V' && ch[i-1]!='I')
            {

                val=val+5;
                i++;
            }

    }

    else if(ch[i]=='X')
    {
        if(ch[i]=='X' && ch[i-1]=='I')
        {
            if(l>2)
            {
            val--;
            val=val+9;
            i=i+2;
            }
            else
            {
                val=9;
                i=i+2;

            }
            //val--;
        }
        else if(ch[i]=='X' && ch[i-1]!='I')
            {
                val=val+10;
                i++;
            }

    }

}

cout<<"\nValue = "<<val;



 return 0;
}
