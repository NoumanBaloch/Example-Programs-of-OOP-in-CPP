#include <iostream>
using namespace std;
class dist    
{
	int a;
	public :
		void in(int x)
		{
			a=x;
		}
		void dis()
		{
			cout<<"Value of x is = "<<a;
			
		}
       ~dist()
		{
		cout<<"\nobject is distroyed\n";	
		}
};
int main()
{
	dist obj;
	obj.in(9);
	obj.dis();
}
