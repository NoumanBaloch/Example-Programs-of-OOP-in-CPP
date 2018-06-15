#include <iostream>
using namespace std;
class addition
{
      private:
              int a,b,sum;
      public:
              int input()
                         {
                         cout<<" Enter your first numbers :=  ";
                         
                         cin>>a;
                         
                         cout<<" Enter your second numbers :=  ";
                         
                         cin>>b;
                         }
              int output()
                         {
                         sum=a+b;
                         
                         cout<<"sum is "<<sum;
                         }
};
int main()
{
    addition obj;
    
    obj.input();
    
    obj.output();
    
    cout<<endl;
system("pause");
}
