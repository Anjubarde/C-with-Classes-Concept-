#include<iostream>
using namespace std;

class Base1
{

    public:
    int i,j;
    Base1()
    {
        cout<<"Inside Base1 Constructor\n";
        i = 10;
        j = 20;
    }
    ~Base1()
    {
        cout<<"Inside Base1 Constructor\n";
        i = 10;
        j = 20;
    }
    void fun()
    {
        cout<<"Inside Fun of Base1\n";
    }
};

class Base2
{

    public:
    int x,y;
    Base2()
    {
        cout<<"Inside Base2 Constructor\n";
        x = 30;
        y = 40;
    }
    ~Base2()
    {
        cout<<"Inside Base2 Constructor\n";
        x = 10;
        y = 20;
    }
    void gun()
    {
        cout<<"Inside Fun of Base2\n";
    }
};

class Derived : public Base1, public Base2 // decide which constructor call first
// constructor calling sequence in order which inherit the class
{
    public:
        int a,b;
        Derived()
        {
            cout<<"Inside Derived constructor\n";
            a = 50;
            b = 60;
        }
        ~Derived()
        {
            cout<<"Inside Derived donstructor\n";
        }
        void sun()
        {
            cout<<"Inside Derived sun\n";
        }
};

int main()
{
    Derived dobj;
    cout<<sizeof(Base1)<<"\n";      //8
    cout<<sizeof(Base2)<<"\n";      //8
    cout<<sizeof(Derived)<<"\n";   //24

    return 0;
}