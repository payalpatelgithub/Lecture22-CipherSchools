#include <iostream>
using namespace std;

int main() {
    int var = 20;    // An integer variable
    int* ptr;       // Declaration of an integer pointer

    ptr = &var;     // Assigning the address of var to ptr

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value stored in ptr (Address of var): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}

