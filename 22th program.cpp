#include <iostream>
#include <string>
using namespace std;
class A{
	char *pointer;
	public:
		A()
		{
			pointer="Nouman";
			
		}
		void dis()
		{
			cout<<pointer;
		}
		
};
int main()
{
	A ob;
	ob.dis();
}
