# Pointers-CPP
Aim-To study and implement C++ pointers basics.
Software used:Visual Studio code.

Theory:A pointer in c++ is a variable that stores the memory address of another variable.Pointers are used for dynamic memory allocation,arrays and functions.

Syntax:
data_type *pointer_name;

#include<iostream>
using namespace std;

int main()
{
    int var = 10;
    int *ptr;

    ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}

Algorithms:

Displaying Pointer Information:

1.Start.
2.Declare an integer variable var and initialize it to 10.
3.Declare an integer pointer ptr.
4.Assign the address of var to ptr using the address-of operator &.
5.Display the value of var.
6.Display the address of var.
7.Display the value stored in ptr (which is the address of var).
8.Display the value pointed to by ptr using the dereference operator.
9. End.# Pointer
