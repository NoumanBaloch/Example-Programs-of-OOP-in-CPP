//4th program of 13 chapter::
#include <iostream>
using namespace std;
class run
{
    static char n1[30],n2[30],n3[30];
	static float d1,d2,d3;
	public :
   static 	void  in()
	{
		cout<<"Enter name of 1st runner = ";
		cin>>n1;
		cout<<"Enter the distance of 1st runner = ";
		cin>>d1;
		cout<<"Enter name of 2st runner = ";
		cin>>n2;
		cout<<"Enter the distace of 2nd runner = ";
		cin>>d2;
		cout<<"Enter name of 3st runner = ";
		cin>>n3;
		cout<<"Enter the distance of 3rd runner = "	;
		cin>>d3;
		}	
	static 	void disp()
		{
		if (d1>d2 && d1>d3 )
		{
		cout<<"\nName of Winner is = ";
		cout<<n1;
		cout<<"\nWth the distance of = ";
		cout<<d1;
		cout<<"Congratulation "<<n1;
		cout<<endl;
	    }


       else if (d2>d1 && d2>d3 )
		{
		cout<<"\nName of Winner is = ";
		cout<<n2;
		cout<<"\nWth the distance of = ";
		cout<<d2;
		cout<<"Congratulation "<<n2;
	    cout<<endl;
		}
      else 
		{
		cout<<"\nName of Winner is = ";
		cout<<n3;
		cout<<"\nWth the distance of = ";
		cout<<d3;
		cout<<"Congratulation "<<n3;
	    cout<<endl;
		}
	
		}
};

char run::n1[30];
char run::n2[30];
char run::n3[30];
float run::d1;
float run::d2;
float run::d3;

int main()
{
	run obj1,obj2,obj3;
	obj1.in();
	obj1.disp();
	obj2.in();
	obj2.disp();
	obj3.in();
	obj3.disp();
}
