#include <iostream>
#include <string>
using namespace std;
class A
{
	char n[4]={"ali"};
	public :
		A()
		{
		
		}
		void dis()
		{
			cout<<n;
		}
};
int main()
{
	A obj;
	obj.dis();
}

