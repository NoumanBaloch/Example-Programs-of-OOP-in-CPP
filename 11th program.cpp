#include <iostream>
using namespace std;
class BA
{  
   int amount;
   char name[30],type[30];
   public:
   	BA()
   	{
   		cout<<"Enter name =";
   		cin>>name;
   		cout<<"Enter type =";
   		cin>>type;
   		cout<<"Enter amount =";
   		cin>>amount;
	   }
	   void disp(int a)
	   {
	   	amount =amount+a;
	   }
	   void withdraw(int b)
	   {
	   	if (amount >b)
	   	{
	   		amount=amount-b;
	   		cout<<"Remaing amount is = "<<amount;
		}
		else {
		cout<<"Please withdraw the valid amount =";
		}
		  }   
	   
	
};
int main()
{
	BA s1;
	int am;
	cout<<"\nDepsit the amount into account = ";
	cin>>am;
	s1.disp(am);
	int wi_dr;
	cout<<"\nEnter the amount to br withdraw = ";
	cin>>wi_dr;
	s1.withdraw(wi_dr);
	
}
