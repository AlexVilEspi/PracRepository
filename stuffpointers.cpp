// In this file we are going to code what we know/remeber about pointers

#include <iostream>
using namespace std;


int main()
{
    int* pptr;

    int score = 2;

    pptr = &score; // remeber to include the & sign next to the variable

    cout << "The memory address of the pointer is " << &pptr;
    cout << "\nTHe value of the pointer is " << *pptr;  // to see if the values are the same remember to include a * next to the pointer variable...



    return 0;


}