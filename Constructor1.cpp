#include<iostream>
using namespace std;

class Marvel
{
    public:
        int No1;
        int No2;    //characteristics 

        Marvel()  // it is not allowed
        {
            cout<<"Inside default Constructor\n";
            No1 = 0;
            No2 = 0;  //constructor
        }
        Marvel(int A, int B)  // ~ --> logical not operator 
        {
            cout<<"Inside parametrised Destructor\n";
            No1 = A;
            No2 = B; //destructor
        }
        ~Marvel()
        {
            cout<<"Inside destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun\n";
        }
};
int main()
{
    Marvel mobj;
    Marvel mobj2(11,21);
    
    return 0;
}