#include <iostream>
using namespace std;
class display
{
	private:
		int age;
		char name[22];
		public:
			int in()
			{
				for(int i=1;i<=5;i++)
				{
					cout<<"Enter age of empolye "<<i<<" = ";
					cin>>age;
				}
			    for(int j=1;j<=5;j++)
			    {
			    	cout<<"Enter name of empolye "<<j<<" = ";
			    	cin>>name[j];
				}
			
			}
			int out()
			{
				for(int k=1;k<=5;k++)
				{
					cout<<"Age of empolye "<<k<<" = ";
					cout<<age;
					cout<<endl;
				}
			    for(int l=1;l<=5;l++)
			    {
			    	cout<<"Name of empolye "<<l<<" = ";
			    	cout<<name[l];
			    	cout<<endl;
				}
			}
};
int main()
{
	display obj;
	obj.in();
	obj.out();
}

