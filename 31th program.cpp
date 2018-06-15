#include <iostream>
using namespace std;
int show(int *);
int main(){
int number;
cin>>number;
show(&number);
}
int show(int *num)
{

    cout<<"Your number is "<<*num;
}
