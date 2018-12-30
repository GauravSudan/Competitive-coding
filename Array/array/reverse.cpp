#include <iostream>
#include<string.h>
using namespace std;
class s
{
public:
        char w[10];
};
int main() {
//String st;
		int i,j=0,l,wcount=1;
		char st[40];
		cout<<"\nEnter a string";
		cin.getline(st,40);
		l=strlen(st);
		for(i=0;i<l;i++)
		{
			if(st[i]=='.')
			{
				//System.out.println("1");
				cout<<"\n1";
				wcount++;
			}
		}

		//System.out.println("WCOUNT "+wcount);
		s ar[wcount];
		int pos=0;
		while(pos<l)
		{
			//try{
			//System.out.println("2");
			if(st[pos]!='.')
			{
				//System.out.println("3");
				ar[j].w+=st(pos);
				pos++;
				//System.out.println("4");
			}
			if(st[pos]=='.')
			{
				//System.out.println("5");
				j++;
				pos++;
				//System.out.println("6");
			}
			}
			//catch(Exception e)
			//{
				//System.out.println(e.getMessage());
			//}

		}
		for(i=j;i>=0;i--)
		{
			//System.out.println(ar[i].w);
		}

//System.out.println("The Factorial is "+result);
	}

return 0;
}
