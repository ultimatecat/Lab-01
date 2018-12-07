#include <iostream>
using namespace std;

class employee
{
	private:
		int number;
		float compensation;
	public:
		void enter();
		void display();
};

void employee::enter()
{
	cout<<"Enter employee number: "; cin>>number;
	cout<<"  Enter employee compensation: "; cin>>compensation;
}

void employee::display()
{
	cout<<"Employee number: "<<number<<endl;
	cout<<"  Employee compensation: "<<compensation<<endl;
}

int main()
{
	employee e1,e2,e3;
	cout<<"1.";
	e1.enter();
	cout<<"2.";
	e2.enter();
	cout<<"3.";
	e3.enter();
	cout<<"1.";
	e1.display();
	cout<<"2.";
	e2.display();
	cout<<"3.";
	e3.display();
	return 0;
}
