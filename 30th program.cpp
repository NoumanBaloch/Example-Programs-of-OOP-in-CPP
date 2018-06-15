#include <iostream>
#include <string>
using namespace std;
class person {
protected:
    int id;
    string name ,address;
public:
    person()
    {
        id = 0;
        name = '\0';
        address = '\0';

    }
    void input()
    {

        cout<<"Enter your address = ";
        cin>>address;
        cout<<"Enter your name ";
        cin>>name;
        cout<<"Enter id = ";
        cin>>id;
    }
    void output()
    {

        cout<<"\npersonal information \n";
        cout<<"Your address is = "<<address<<endl;
        cout<<"your name is = "<<name<<endl;
        cout<<"Your id is = "<<id<<endl;
    }

};
class student : public person
{
private :

    int rno,marks;
public:
    student()
    {

        rno=marks=0;

    }
    void input()
    {

        person::input();
        cout<<"Enter your roll no = ";
        cin>>rno;
        cout<<"Enter your marks = ";
        cin>>marks;
    }
    void output(){
        person::output();
        cout<<"\nEducational information ";
        cout<<"\nyour roll no is = "<<rno<<endl;
        cout<<"Your marks is = "<<marks<<endl;

    }
};
class scholorship : public student{
private :
    string surname;
    long amount;
public:
    void input()
    {

        student :: input();
        cout<<"\nSchoorship information ";
        cout<<"\nEnter scholorship name = ";
        cin>>surname;
        cout<<"\nEnter scholorship amount = ";
        cin>>amount;

    }
    void output()
    {

        student :: output();
        cout<<"\nscholorship information ";
        cout<<"\nScholorship name = "<<surname<<endl;
        cout<<"\nscholorship amount = "<<amount<<endl;
    }
};
int main()
{

    scholorship obj;
    obj.input();
    obj.output();
}
