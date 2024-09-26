#include<iostream>
using namespace std;

int main()
{
    int Arr[5]; //Static memory 
    
    int *ptr = NULL;

    //step1 : Allocate the memory
    ptr = new int[5];

    //step2 : Use the memory
    //Logic

    //step3 : Deallocate the memory
    delete []ptr;
    
    return 0;
}