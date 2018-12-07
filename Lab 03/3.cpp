#include <iostream>
using namespace std;

class counter
{
	private:
		static int count;
		int num;
	public:
		counter()
		{
			static int count=1;
			num=count++;	
		}
		void show()
		{
			cout<<"I am object number "<<num<<endl;
		}
};

int main()
{
	counter x[3];
	for(int i=0;i<3;i++)
	{
		x[i].show();
	}
	return 0;
}
