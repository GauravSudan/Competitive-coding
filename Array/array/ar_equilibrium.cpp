#include <iostream>
using namespace std;

int main() {
	int N,i,j,sl,sr,flag=1,pos=1;
	cout<<"\nEnter size of array ";
	cin>>N;
	int *ar=new int[N];
	for(i=0;i<N;i++)
    {
        cout<<"\nEnter array element ";
        cin>>ar[i];
    }
	while(flag==1)
    {
        if(N!=1){

        sl=0,sr=0;
    for(i=0;i<pos;i++)
    {
        sl=sl+ar[i];
    }
    for(j=pos+1;j<N;j++)
    {
        sr+=ar[j];
    }
    if(sl==sr)
    {
        flag=0;
        cout<<"\nDone";
        //break;
    }
    else
        pos++;
        }
    else{
        flag=0;
        pos=1;
    }
    }
if(N!=1)
{

cout<<"\nEquilibrium position :"<<pos<<"\t Element : "<<ar[pos];

}
if(N==1)
{

cout<<"\nEquilibrium position :"<<pos<<"\t Element : "<<ar[0];


}
return 0;
}
