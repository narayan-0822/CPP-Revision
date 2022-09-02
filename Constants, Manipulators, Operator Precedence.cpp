#include <iostream>
#include <iomanip>
using namespace std;

int main(){
                                            // CONSTANTS
    
    // When a constant variable is initialized in a program, its value cannot be changed afterwards
    
    const int m = 25;   // const keyword is used to decalre a variable as constant
    
    // m = 100 Here you will get an error because a is a constant
    
    
    
                                            // MANIPULATORS 
    
    // Manipulators are used in the formatting of output
    //  The two most commonly used manipulators are: "endl" and "setw"(available after adding #include <iomanip>)
    // "setw" is used to specify the width of the output.
    
    int a =7, b=33, c=5967;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    
    
                                            // OPERATOR PRECEDENCE
    
    /* Operator precedence helps us to solve an expression. For example, in an expression "int c = a*b+c" 
    the multiplication operator's precedence is higher than the precedence of addition operator, so the multiplication 
    between "a & b" first and then addition will be performed.

    Operator associativity helps us to solve an expression; when two or more operators have the same precedence, 
    the operator associativity helps us to decide that we should solve the expression from "left-to-right" or from "right-to-left".
    */
    
    return 0;
}








