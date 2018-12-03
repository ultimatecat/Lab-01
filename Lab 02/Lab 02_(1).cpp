#include <iostream>
using namespace std;

typedef struct
{
	int areacode;
	int exchange;
	int number;
}phonenumber;

phonenumber mnb, ynb;

int main()
{
	cout<<"\nEnter your area code, exchange, number: ";
	cin>>ynb.areacode>>ynb.exchange>>ynb.number;
	mnb.areacode=212;
	mnb.exchange=767;
	mnb.number=8900;
	cout<<"\nMy number is "<<"("<<mnb.areacode<<") "<<mnb.exchange<<"-"<<mnb.number<<endl;
	cout<<"\nYour number is "<<"("<<ynb.areacode<<") "<<ynb.exchange<<"-"<<ynb.number;
	return 0;
}
