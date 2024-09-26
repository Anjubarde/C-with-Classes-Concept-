// Single level inheritance 

#include<iostream>
using namespace std;

class Base  // Grandparent 
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base Constructor\n";
            i = 10;
            j = 20;
        }
        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }
};

class Derived : public Base // Parent 
{
    public:
        int x,y;
        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x = 30;
            y = 40;
        }
        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }
};

// Child --> DerivedX
class DerivedX : public Derived // X use because update of before class like derived --> derivedX
{
   public:
    int a,b;
    DerivedX()
    {
        cout<<"Inside DerivedX construcor\n";
        a = 50;
        b = 60;
    } 
    ~DerivedX()
    {
        cout<<"Inside Derived Destructor\n";
    }
    void Sun()
    {
        cout<<"Inside Derived Sun\n";
    }
};

int main()
{
    // Base bobj;
    DerivedX dobj; 
    // Constructors call : Base-->Derived-->DerivedX
    cout<<"Inside main function\n";

    cout<<"Size of Base class "<<sizeof(Base)<<"\n"; //8
    cout<<"Size of Derived class "<<sizeof(Derived)<<"\n"; //16
    cout<<"Size of DerivedX class "<<sizeof(DerivedX)<<"\n"; //24

    cout<<dobj.i<<"\n"; //10
    cout<<dobj.j<<"\n"; //20
    cout<<dobj.x<<"\n"; //30
    cout<<dobj.y<<"\n"; //40
    cout<<dobj.a<<"\n"; //50
    cout<<dobj.b<<"\n"; //60

    dobj.Fun(); //Inside fun of base
    dobj.Gun(); //Inside gun of Derived 
    dobj.Sun(); //Inside sun of DerivedX

    //cout<<sizeof(bobj)<<"\n";
    //cout<<sizeof(dobj)<<"\n";

    // Destructor : DerivedX-->Derived-->Base
    return 0;
}