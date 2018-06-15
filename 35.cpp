#include <iostream>
using namespace std;
void starline();
int main()
{

     starline();
     cout<<"Data type            Range "<<endl;
     starline();
     cout<<"char             -128 to 127*\n";
     cout<<"short          -32768 to 32768\n";
     cout<<"int            system dependent\n";
     cout<<"long      -2 147 483 648 to 2 147 483 648\n";
     starline();
}
void starline()
{

    for(int j=1;j<50;j++)
    {
        cout<<"*";
        
    }
    cout<<endl;
}
