#include<iostream>
using namespace std;

class Demo //characteristics - 3, i,j-->non static
{
    public:
        int i,j;
        static int k;

        Demo()
        {
            i = 10; // non static 
            j = 20;
            //static are not allowed in constructor 
        }

        void Fun()
        {
            cout<<"Inside non static Function\n";
            cout<<this->i<<"\n";
            cout<<this->j<<"\n";
            cout<<k<<"\n";
        }
        static void Gun()
        {
            cout<<"Inside static Gun\n";
            cout<<k<<"\n";
        }
};
int Demo :: k = 30;

int main()
{
    cout<<"Value of k is :"<<Demo::k<<"\n";
    Demo::Gun();

    Demo obj1;
    Demo obj2;

    obj1.Fun();
    obj2.Fun();

    obj1.Gun();
    obj2.Gun();
    
    cout<<"Value of k using object :"<<obj1.k<<"\n";
    cout<<"Value of k using object :"<<obj2.k<<"\n";

    return 0;
}