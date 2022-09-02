#include<iostream>

using namespace std;

int c = 25;

int main(){
    
                                                    // BUILT IN DATA TYPES 
    
    int a,b,c;
    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;
    
    c = a+b;
    cout << "the sum is " << c << endl;
    
    // To get the value of Global variables we have to use Scope Resolution operator i.e. ::
    cout << "the global value of c is " <<::c << endl;  
    
    
                                                    // FLOAT, DOUBLE AND LONG DOUBLE LITERALS
    float x = 25.3f;
    long double m = 25.3l;
    
    cout << "The value of x is " << x << endl << "The value of m is " << m << endl;
    
    cout << "The size of 25.3 is " << sizeof(25.3) << endl;     // By default it is stored as long data type 
    cout << "The size of 25.3f is " << sizeof(25.3f) << endl;   // small f or capital f next to the number make it a float data type 
    cout << "The size of 25.3l is " << sizeof(25.3l) << endl;   // small l or capital l next to the number make it a double data type
    cout << "The size of 25.3F is " << sizeof(25.3F) << endl;   // small f or capital f next to the number make it a float data type 
    cout << "The size of 25.3L is " << sizeof(25.3L) << endl;   // small l or capital l next to the number make it a double data type
    
    
                                                    // REFERENCE VARIABLES 
    
    // Reference variables can be defined as another name for an already existing variable
    
    float p;
    float &q = p;
    
    cout << "Enter the value of p ";
    cin >> p;
    cout << "The value of p is " << p << endl;
    cout << "The value of q should be the same as p i.e. " << q <<endl;
    
    
                                                    // TYPECASTING 

    // Typecasting can be defined as converting one data type into another.
    
    float ar15 = 5.56;
    int ak47 = 7;
    
    cout << "The float value of ar15 is " << ar15 << endl;
    cout << "The int value of ar15 is " << int(ar15) << endl; 
    cout << "The int value of ar15 is " << (int)ar15 << endl;
    
    cout << "The int value of ak47 is " << ak47 << endl;
    cout << "The float value of ak47 is " << float(ak47) << endl;
    cout << "The float value of ak47 is " << (float)ak47 << endl;
    
    int h = int(ar15);
    cout << "The value of h is " << h << endl; 
    
    cout<<"The expression is "<<ar15 + ak47<<endl;
    cout<<"The expression is "<<ak47 + int(ar15)<<endl;
    
    return 0;
}



