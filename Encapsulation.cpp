#include<iostream>
using namespace std;

class Meow
{
    public:  //behaviour in class --> 2(fun, gun) --> function
        int A; //4
        int B; //4 --> obj 4+4=8

        void Fun()
        {
            cout<<"Inside the Fun\n";
        }

        void Mun()
        {
            cout<<"Inside the Gun\n";
        }
};

int main()
{
    Meow obj;

    cout<<sizeof(obj)<<"\n";    //8

    obj.A = 11;
    obj.B = 21;

    obj.Fun();       //Inside Fun
    obj.Mun();       //Inside Mun

    cout<<obj.A<<"\n";  //11
    cout<<obj.B<<"\n";  //21

    return 0;
}

// it is declaration of class so there 
// is no need of class 
// when we create obj class get memory 
