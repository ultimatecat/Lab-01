#include <iostream>
using namespace std;

class time
{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		time() : hours(0), minutes(0), seconds(0)
		{}
		
		time(int h,int m, int s) : hours(h), minutes(m), seconds(s)
		{} 

		void displayTime();
		time addTime(time t1);
};

void time::displayTime()
{
	if(hours<10) cout<<"0"; cout<<hours<<":";
	if(minutes<10) cout<<"0"; cout<<minutes<<":";
	if(seconds<10) cout<<"0"; cout<<seconds<<endl;
}

time time::addTime(time t1)
{
	time temp;
	temp.hours=hours+t1.hours;
	temp.minutes=minutes+t1.minutes;
	temp.seconds=seconds+t1.seconds;
	
	if(temp.seconds>=60)
	{
		temp.seconds=temp.seconds-60;
		temp.minutes++;
	}
	if(temp.minutes>=60)
	{
		temp.minutes=temp.minutes-60;
		temp.hours++;
	}
	if(temp.hours>=12)
		temp.hours=temp.hours-12;
	return temp;
}

int main()
{
	time t1(11,59,59);
	time t2(10,10,11);
	time t3;
	t3=t1.addTime(t2);
	t3.displayTime();
	return 0;
}
