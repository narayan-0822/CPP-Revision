#include <iostream>
using namespace std;

/* There are two types of header files:
    - System header files (ex: #includeL<iostream>)
    - User defined header files (ex: #include "this.h")
    (this will produce an error if this.h file is not present in the current directory)
*/

int main(){
    int a=4, b=5;
    
    // Arithmetic operators
    cout << "Following are the Arithmetic operators in c++" << endl;
    cout << "The value of a + b is " << a+b << endl;
    cout << "The value of a - b is " << a-b << endl;
    cout << "The value of a * b is " << a*b << endl;
    cout << "The value of a / b is " << a/b << endl;
    cout << "The value of a % b is " << a%b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl << endl;
    // Assignment operators (used to assign values to variables)
    
    a = 23,b = 25;
    
    // Comparison operators
    cout << "Following are the Comparison operators in c++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << endl << endl;
    
    // Logical operators
    cout << "Following are the Logical operators in c++" << endl;
    cout << "The value of this Logical AND operator ((a <= b) && (a > b)) is " << ((a <= b) && (a > b)) << endl;
    cout << "The value of this Logical OR operator ((a <= b) || (a > b)) is " << ((a <= b) || (a > b)) << endl;
    cout << "The value of this Logical NOT operator (!(a <= b)) is " << (!(a <= b)) << endl;
    
    // Bitwise operators
    
    return 0;
}