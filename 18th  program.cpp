#include <iostream>
using namespace std;
class account{
	private:
		static int a,b;
		public:
			static void get()
			{
				cin>>a>>b;
			}
			static void show()
			{
				cout<<a+b;
			}
};
int account::a;
int account::b;
int main()
{
	account::get();
	account::show();
}
