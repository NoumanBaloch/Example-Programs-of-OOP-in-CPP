#include <iostream>
using namespace std;
class time{
	int hour,min;
	public :
		void get(int x,int y)
		{
				hour=x;
	           min=y;
		}
		void cal(time , time);
		void dis();
};

void time::cal(time t1,time t2)
{
	min=t1.min+t2.min;
	hour=min/60;
	min=min%60;
	hour = hour+hour.t1+hour.t2;
	
}
void time::dis()
{
	cout<<hour<<" : " <<min;
}
int main()
{
	time t1,t2,t3;
	t1.get(21,54);
	t2.get(212,44);
	t3.cal(t1,t2);
	t1.dis();
	t2.dis();
	cout<<"Addition of time is = ";
	t3.dis();
}
