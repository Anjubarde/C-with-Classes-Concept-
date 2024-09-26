#include<iostream>
using namespace std;
// Class--> Demo 
class Demo
{
    public:
        int No1,No2; //characteristics -->No1,No2 

        Demo(int A, int B) //Paramenterized Constructor
        {
            No1 = A;
            No2 = B;
        }

        // void display (Demo *this, int x) -- Hidden process
        void Display(int X) //Method/Function -->Display 
        {
            cout<<"Value of No1 :"<<this->No1<<"\n";
            cout<<"Value of No2 :"<<this->No2<<"\n";
            cout<<"Value of X :"<<X<<"\n";
        }
};

int main()
{
    Demo obj(11,22); //Demo :: No1
                     //Demo :: No2
    obj.Display(51); //Function Call-->Execute like-->Display(&obj,51);      
    // Display(&obj,51);  Display(100,51);
    return 0;
}

//class la memory bhetat nhi tya mul obj create krta then obj la space bhetate 