// Single level inheritance 

#include<iostream>
using namespace std;

class Base
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

class Derived : public Base
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

int main()
{
    // Base bobj;
    Derived dobj;
    cout<<"Inside main function\n";
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";

    dobj.Fun();
    dobj.Gun();
    //cout<<sizeof(bobj)<<"\n";
    //cout<<sizeof(dobj)<<"\n";

    return 0;
}