#include <iostream>
using namespace std;
class test{
	private:
		int roll;
		float per;
		public:
		
			void putdata()
			{
				cout<<"Enter your roll no = ";
				cin>>roll;
				cout<<endl;
				cout<<"Enter your percentage = ";
				cin>>per;
				cout<<endl;
				cout<<"roll no is = "<<roll;
				cout<<endl;
				cout<<"percentage is = "<<per;
				cout<<endl;
			}
};

int main()
{
	test st;

	st.putdata();
system ("pause");
}
