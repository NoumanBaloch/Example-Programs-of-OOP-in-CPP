#include <iostream>
#include <string>
using namespace std;
class A{
public:
    string nomi;
    void show()
    {

        cout<<"HI my name is "<<nomi;
    }

};
int main(){


     A *obj= new A();
     obj->nomi="Nouman";
     obj->show();

}
