#include <iostream>
using namespace std;
class A
{
	char name[30];
	int sal;
	public :
		void getdata();
		void showdata();
		
};
void A::getdata()
{
	cout<<"\nEnter name = ";
	cin>>name;
	cout<<"\nEnter salery =";
	cin>>sal;
	
}
void A::showdata()
{
    cout<<"\nName = ";
	cout<<name;
	cout<<"\nSalery =";
	cout<<sal;
}
int main()
{
	int n;
     cout<<"Enter number of empolyed = ";
	 cin>>n;
	 A 	obj[n];
     
     int i;
     for(i=0;i<n;i++)
     {
     	obj[i].getdata();
	 }
    for(i=0;i<n;i++)
     {
     	obj[i].showdata();
	 }

}
