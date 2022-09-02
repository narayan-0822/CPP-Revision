#include <iostream>

using namespace std;

/* Local variables : These variables are declared inside the braces of any function
 and can be accessed only from there*/
 
/* Global variables : These variables are declared outside any function and 
can be accessed from anywhere*/

// [Important] Global and local variables can have the same name in C++

// Local variables take precedence

/* Data types in C++ are of 3 types:
    - Built in: int, char, float, double, booleen
    - User Defined: struct, union, enum
    - Derived: array, function, pointer
*/



int glo = 6;    // Global variable
void teletubbies(){
    int a;
    cout << glo << endl;
}
    
int main(){
    int glo = 9;    // Local variable
    cout << glo << endl;
    glo = 57;       // Updating local variable
    cout << glo << endl;
    
    teletubbies();
    
    
    int a=5, b=6;
    float pi = 3.14;
    char c = 't';
    bool bvar = true;
    cout << "Value of a is " << a << ". value of b is " << b;
    cout << "\n The value of pi is " << pi;
    cout << "\n The value of 'c' is " << c << endl;
    cout << "value of booleen variable is " << bvar;
    return 0;
}
