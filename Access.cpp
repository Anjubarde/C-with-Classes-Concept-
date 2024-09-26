#include<iostream>
using namespace std;

class Demo //characteristic --> 2 (A,B) public,private
//behaviour -->2 ()
{
    public:
        int A;
    private:
        int B;
    public:
        //constructor & destructor always in public section
        Demo()
        {
            A = 11;
            B = 21;
        }
        void Fun()
        {
            cout<<"Value of A : "<<A<<"\n"; // Allowed
            cout<<"Value of B : "<<B<<"\n"; // Allowed 
        }

};

int main()
{
    Demo obj;
    obj.Fun();                          //Allowed
    cout<<"Value of A :"<<obj.A<<"\n";  //Allowed
    cout<<"Value of A :"<<obj.B<<"\n";  //Not Allowed 

    return 0;
}