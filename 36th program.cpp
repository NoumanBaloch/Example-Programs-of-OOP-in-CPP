#include <iostream>
using namespace std;
void table(int &n);
int main()
{
	int num;
	cout<<"Enter number for its table = ";
	cin>>num;
	table(num);
}
void table(int &n)
{
	int j;
	for(j=1;j<=10;j++)
	{
		cout<<n<<" x "<<j<<" = "<<n*j<<endl;
	}
}
