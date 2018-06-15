#include <iostream>
using namespace std;
class fri{
	int a,b,z;
	public :
	     fri(int,int);
		friend int show(fri p);
};
fri::fri(int x,int y)
{
	a=x;
	b=y;
}
int show(fri p)
{
	return(p.a+p.b);

}
int main()
{
	fri obj(9,45);
	cout<<show(obj);
	
}
