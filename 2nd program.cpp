#include <iostream>
using namespace std;
class students
{
      private:
              int age,roll_no;
              float per;
              char name[30],clas[10];
      public:
             int input()
             {
                 cout<<"Enter your class =: "<<"\nCLass = ";
                 cin>>clas;
                 cout<<endl;
                 cout<<"Enter your name and Roll NO =:  "<<"\nName = ";
                 cin>>name;
                 cout<<"ROLL NO = ";
                 cin>>roll_no;
                 cout<<endl;
                 cout<<"Enter your Age and percentage =:  "<<"\nAge = ";
                 cin>>age;
                 cout<<"Percentage = ";
                 cin>>per;
             }
             int display()
             {
                 cout<<"\nClass.\tName.\tAge.\tRoll No.\tPer";
                 cout<<"\n"<<clas<<"\t"<<name<<"\t"<<age<<"\t"<<roll_no<<"\t"<<"\t"<<per;
                 cout<<endl;
                 cout<<"_____________***End of Program***________________________";
             }
             };
             int main()
             {
                 students obj;
                 obj.input();
                 obj.display();
                 cout<<endl;
                 system("pause");
             }
