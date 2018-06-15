#include <iostream>
using namespace std;
class add{
	int a,b,c;
	public:
		void getdata()
	
		{
			cout <<"Enter two numbers";
			cin>>a>>b;
			
		}
		
	    void calculate();
	    void display();
};
void add::calculate()
{
	c=a+b;
}
void add::display()
{
	cout<<"addition is =" <<c;
}
int main()
{
	add x;
	x.getdata();
	x.calculate();
	x.display();
}
