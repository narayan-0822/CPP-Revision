#include <iostream>

using namespace std;

int main(){
    /*
    Types of loops in C++
        - For loops
        - While loops
        - Do-while loops
    */
    
                                                // For Loop in C++
    
    /* Syntax for for loop
    for(initialization; condition; updation){ 
        loop body(C++ code); 
    }
    
    initialization runs only one time
    */
    
    for(int x; x<=10; x++){
        cout << x << endl;
    }
    
                                                // While Loop in C++
    
    // To make the while loop run infinitely put "true" in condition of the loop
    
    int y=0;
    while(y<=10){
        cout << y << endl;
        y++;
    }
    
                                                // Do-while Loop in C++
    
    // In Do-while loop, first the do block runs then based on the while condition the do block loops	
    int p = 7;
    do{
        cout << "The DO loop is executing" << endl;
        cout << p << endl;
        p++;
    }while(p<=10);
    
    return 0;
}