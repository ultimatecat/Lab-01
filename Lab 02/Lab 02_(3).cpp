#include <iostream>
using namespace std;

void fourfunctioncal(float a, float b, char c);

int main()
{
	float a,b;
	char c,confirm;
	do
	{
		cout<<"\nEnter first number, operator, second number: ";
		cin>>a>>c>>b;
		fourfunctioncal(a,b,c);
		cout<<"\nDo another (y/n)?";
		cin>>confirm;
	}
	while(confirm=='y'||confirm=='Y');
	return 0;
}

void fourfunctioncal(float a, float b, char c)
{
	switch(c)
	{
		case '+':cout<<"Answer: "<<a+b;break;
			
		case '-':cout<<"Answer: "<<a-b;break;
			
		case '*':cout<<"Answer: "<<a*b;break;
			
		case '/':cout<<"Answer: "<<a/b;break;
			
		default:cout<<"FALSE";break;
	}
}
