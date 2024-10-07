#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        // 1000
        int Addition(int No1, int No2) // Concrete method 
        {
            return No1 + No2;
        }

        virtual int Substraction(int No1, int No2) = 0; // Abstract

};

class Derived : public Base 
{
    public:
        int X,Y;

        // 2000
        int Multiplication(int No1, int No2) // Concrete method 
        {
            return No1 * No2;
        }
        // 3000
        int Substraction(int No1, int No2) // Concrete method 
        {
            return No1 - No2;
        }

};

int main()
{
    // Base bobj; Not Allowed
    Derived dobj;

    cout<<"Addition is : "<<dobj.Addition(11,10)<<"\n";
    cout<<"Substraction is : "<<dobj.Substraction(11,10)<<"\n";
    cout<<"Multiplication is : "<<dobj.Multiplication(11,10)<<"\n";

    cout<<"Size of Base is : \n"<<sizeof(Base);
    cout<<"Size of Derived is : \n"<<sizeof(Derived);

    return 0;
}