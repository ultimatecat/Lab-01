#include <iostream>
using namespace std;

void calinvestmoney(float amount,int years,float rate);

int main()
{
	float amount;
	float rate;
	int years;
	cout<<"\nEnter initial amount: ";
	cin>>amount;
	cout<<"\nEnter number of years: ";
	cin>>years;
	cout<<"\nEnter interest rate(percent per year): ";
	cin>>rate;
	calinvestmoney(amount,years,rate);
	return 0;
}

void calinvestmoney(float amount,int years,float rate)
{
	for(int i=1;i<=years;i++)
		amount=amount+(amount*rate)/100;
	cout<<"\nAt the end of "<<years<<", you will have "<<amount<<" dollars.";
}
