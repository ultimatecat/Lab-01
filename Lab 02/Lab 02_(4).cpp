#include <iostream>
using namespace std;

void fourfunctioncalfactions(int a,int b,int c,int d,char e);
int main()
{
	int a,b,c,d;
	char e,f,confirm;
	do
	{
		cout<<"\nFirst fraction, operator, second fraction: ";
		cin>>a>>f>>b>>e>>c>>f>>d;
		fourfunctioncalfactions(a,b,c,d,e);
		cout<<"\nDo another (y/n)?";
		cin>>confirm;
	}while(confirm=='y'||confirm=='Y');
	return 0;
}


void fourfunctioncalfactions(int a,int b,int c,int d,char e)
{
	switch(e)
	{
		case '+':cout<<"Answer: "<<a*d+b*d<<"/"<<b*d; break;
		case '-':cout<<"Answer: "<<a*d-b*c<<"/"<<b*d; break;
		case '*':cout<<"Answer: "<<a*c<<"/"<<b*d; break;
		case '/':cout<<"Answer: "<<a*d<<"/"<<b*c; break;
	}
}
