#include <iostream>
using namespace std;
class personal_info
{
      private:
              char date_of_birth[20],cnic[20],gender[10],name[30],father_name[30];
              int age;
      public:
             int info()
             {
             	cout<<"Enter your name and father name =: ";
             	cout<<"\nName = ";
				cin>>name;
				cout<<"Father name = ";
				cin>>father_name;
             	cout<<"Enter your age and gender = ";
             	cout<<"\nAge = ";
             	cin>>age;
             	cout<<"Gender = ";
             	cin>>gender;
             	cout<<"Enter your date of birth and CNIC NO =: ";
             	cout<<"\nDate of birth = ";
				cin>>date_of_birth;
				cout<<"CNIC NO = ";
				cin>>cnic;
                
             }
             int display()
             {
                 cout<<"\nName.\tFather Name.\tAge.\tCNIC NO.\tGender.\tBirth date";
                 cout<<"\n\n"<<name<<"\t"<<father_name<<"\t"<<"\t"<<age<<"\t"<<cnic<<"\t"<<"\t"<<gender<<"\t"<<date_of_birth;
                 cout<<endl;
                 cout<<"_______________***End of Program***__________________";
             }
             };
             int main()
             {
                 personal_info obj;
                 obj.info();
                 obj.display();
                 cout<<endl;
                 
             }
