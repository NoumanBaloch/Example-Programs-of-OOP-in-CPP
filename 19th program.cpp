#include <iostream>
using namespace std;
class A{
	private:
		int a,b;
		public:
		void get(int,int);
		friend void calculate(A);
};
void A::get(int x,int y)
{
	a=x;
	b=y;
}
void calculate(A ob)
{
	cout<<"Additon is = "<<ob.a+ob.b;;
}
int main()
{
	A obj;
	obj.get(54,54);
	calculate(obj);
}
