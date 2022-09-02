#include <iostream>

using namespace std;

int main()
{
    // Pointers is a Data Types which holds the value of other data Types
    int a = 7;
    int* x = &a;
    
    // & ---> (Address of ) Operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << x << endl;

    // * ---> (Value at ) Operator | Dereference Operator
    cout << "The value at x is " << *x << endl;
    
    // Pointer to Pointer
    int** z = &x;
    cout << "the address of x is " << &x << endl;
    cout << "the address of x is " << z << endl; 
    cout << "the value at x is " << *z << endl; 
    cout << "the value at the (value at x) is " << **z << endl; 
    

    return 0;
}