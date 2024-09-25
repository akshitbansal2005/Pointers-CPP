# Pointers in C++

## Aim
Learn the basics of pointers in C++.

## Software Used
Visual Studio Code.

## What is a Pointer?
A pointer is a variable that stores the memory address of another variable. It is useful for dynamic memory allocation, arrays, and functions.

### Syntax
```cpp
data_type *pointer_name;
```

## Example Code
```cpp
#include <iostream>
using namespace std;

int main() {
    int var = 10;        // Declare an integer variable
    int *ptr;           // Declare a pointer

    ptr = &var;         // Assign address of var to ptr

    cout << "Value of var: " << var << endl;                // Display value of var
    cout << "Address of var: " << &var << endl;            // Display address of var
    cout << "Value stored in ptr: " << ptr << endl;        // Display value of ptr (address of var)
    cout << "Value pointed to by ptr: " << *ptr << endl;    // Display value at address pointed to by ptr

    return 0;
}
```

## Algorithm for Displaying Pointer Information
1. Start.
2. Declare an integer variable `var` and initialize it to 10.
3. Declare an integer pointer `ptr`.
4. Assign the address of `var` to `ptr` using the address-of operator `&`.
5. Display the value of `var`.
6. Display the address of `var`.
7. Display the value stored in `ptr` (which is the address of `var`).
8. Display the value pointed to by `ptr` using the dereference operator `*`.
9. End.
