#include <iostream>
using namespace std;
class test{

        int no;
        static int count;
        public:
        	void setno();
        	void dispno();
        	static void dispcount();
};

void test::setno()
{
	no=++count;
}
void test::dispno()
{
	cout<<"Object no = "<<no;
}
void test::dispcount()
{
	cout<<"Counter is = "<<count;
}
int test::count;
int main()
{

test t1,t2;
t1.setno();
t2.setno();
test::dispcount();
test t3;
t3.setno();
test::dispcount();
t1.dispno();
t2.dispno();
t3.dispno();

}
