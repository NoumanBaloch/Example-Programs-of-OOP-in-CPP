#include <iostream>
#include <string>
using namespace std;
class A{
	string name,title;
	public:
	A()
	{
		cout<<"Name = ";
		cin>>name;
		cout<<"Title = ";
		cin>>title;
		
	}
	void dis()
	{
		if (name=="ali"  &&  title == "bk" )
		{
			cout<<"ok";
		}
		else{
			cout<<"error";
		}
	}
};
int main()
{
	A ob;
	ob.dis();
}
