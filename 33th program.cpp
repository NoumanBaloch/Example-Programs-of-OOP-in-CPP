#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;
int main()
{

    int numb;

    for(int numb=1 ; numb<=10 ; numb++)
    {
        cout << setw(5)<<numb;
        int cube = numb*numb*numb;
        cout <<setw(7)<< cube<<endl;
    }
    int num;
    cout<<"Enter number = ";
    cin>>num;
     double sqt;
     sqt =sqrt(num);
    cout<<"Squre root is "<<sqt;
}
