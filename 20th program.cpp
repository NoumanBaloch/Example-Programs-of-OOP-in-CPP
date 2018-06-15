#include <iostream>
using namespace std;
class A{
	char *my =&"aasd";
	public :
		void dis()
		{
			cout<<my;
		}
};
int main()
{
	A ob;
	ob.dis();
}
