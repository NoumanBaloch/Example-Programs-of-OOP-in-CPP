#include <iostream>
using namespace std;
class add{
	int km,hr;
	public :
		add()
		{
			km= hr=0;
		}
		void get()
		{
			cout<<"\nEnter KM = ";
			cin>>km;
			cout<<"\nEnter Hours = ";
			cin>>hr;
		}
		void show()
		{
			cout<<"\nYou traveled "<<km<<" kilometer in "<<hr<<" hours \n";
		}
		void sum(add p)
		{
			int x,z;
   			z=p.km+p.km;
            x=p.hr+p.hr;
            cout<<"\nYou traveled "<<z<<" kilometer in "<<x<<" hours ";
		}
		
};
int main()
{
	add my,your;
	my.get();
	my.show();
	your.get();
	your.show();
	my.sum(your);
}
