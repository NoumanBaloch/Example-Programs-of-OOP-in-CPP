#include <iostream>
#include <string>
using namespace std;
class LocalPhone{
	protected:
	int phone;
	public:
	void noin(int);
	void noshow();	
};
void LocalPhone::noin(int x)
{
        phone=x;	
		cout<<endl;
}

void LocalPhone::noshow()
{
		cout<<"Your telephone no is = ";
		cout<<phone;
		cout<<endl;
}
class NetPhone:public LocalPhone
{
	protected :
	int CityCode;
	public:
	void cityin(int);
    void cityshow();
};
void NetPhone::cityin(int y)
{

    CityCode=y;
	cout<<endl;
}
void NetPhone::cityshow()
{
		cout<<"Your City code is = ";
		cout<<CityCode;
		cout<<endl;
}
class Intphone:public NetPhone
{
	    protected:
		int CountryCode;
		public:
		void counin(int);
		void countshow();
	
};
void Intphone::counin(int z)
{
			CountryCode=z;
			cout<<endl;
			
}
void Intphone::countshow()
{

			cout<<"Your Country code is = ";
			cout<<CountryCode;
			cout<<endl;
}
int main()
{

	
	Intphone ob3;
	int x;
	cout<<"Enter your phone no = ";
	cin>>x;
	ob3.noin(x);
	ob3.noshow();
	cout<<endl;
	int y;
	cout<<"Enter your city code  = ";
	cin>>y;
	ob3.cityin(x);
	ob3.cityshow();
	cout<<endl;
	int z;
	cout<<"Enter your country code = ";
	cin>>z;
	ob3.counin(z);
	ob3.countshow();

}
