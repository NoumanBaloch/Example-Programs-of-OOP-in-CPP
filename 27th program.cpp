#include <iostream>
using namespace std;
virtual class A{
	
    public:
  void dis()
  {
  
    	cout<<"Helloo ....\n";
}
};
class B:public A{
	
	
	
};
class C:public A{
	
};
class D:public B, public  C
{
	
};
int main()
{


  D	 ob;
   ob.dis(); 
}
