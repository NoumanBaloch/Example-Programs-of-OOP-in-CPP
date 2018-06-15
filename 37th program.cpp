#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int max=20000;
	char str[max];
	cin.get(str, max);
	cout<<"you enterd "<<setw(12)<<str;
}
