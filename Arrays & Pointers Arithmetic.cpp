#include <iostream>

using namespace std;

int main()
{
    // Arrays
    
    int arrONE[6] = {12,31,35,46,48,455};   // This array can only hold 6 values
    cout << "The value at 1st block of Array 'arrONE' is: " << arrONE[0] << endl;
    
    int arrTWO[4];
    arrTWO[0] = 21;
    arrTWO[1] = 25;
    arrTWO[2] = 35;
    arrTWO[3] = 65;
    
    // Printing arrTWO using Do-While loop
    
    int i = 0;
    do{
        
        cout << "The value of arrTWO at " << i << " is: " << arrTWO[i] << endl;
        i++;
        
    }while(i<4);
    
    arrTWO[2] = 405;
    cout << "The new value of arrTWO[2] is: " <<arrTWO[2] << endl;
    
    // Printing arrONE using for loop
    
    for (int l=0; l<6; l++){
        cout << "The value of arrONE at " << l << " is: " << arrONE[l] << endl;
    }
    
    // Pointers in arrays
    
    cout << "The address of FIRST block of array 'arrONE' is " << arrONE << endl;
    
    // Pointer Arithmetic
    
    /* The address of an array is calculated using the following formula
        
        Address(new block) = Address(current block) + i * sizeof(data type) 
        
        in the below example: 
            i is the number of increment in block
            Address(new) is (p+i)
            Address(current) is p
            sizeof(data type) is 4 in this case
    */
    
    int* p = arrONE;
    
    
    cout << "The address of FIRST block of array 'arrONE' is  " << p << endl; 
    cout << "The address of SECOND block of array 'arrONE' is  " << (p+1) << endl; 
    cout << "The address of THIRD block of array 'arrONE' is  " << (p+2) << endl; 
    cout << "The address of FOURTH block of array 'arrONE' is  " << (p+3) << endl; 
    
    cout << endl;
    cout << endl;
    cout << endl;
    
    cout << "The value AT the address of FIRST block of array 'arrONE' is  " << *p << endl; 
    cout << "The value AT the address of SECOND block of array 'arrONE' is  " << *(p+1) << endl; 
    cout << "The value AT the address of THIRD block of array 'arrONE' is  " << *(p+2) << endl; 
    cout << "The value AT the address of FOURTH block of array 'arrONE' is  " << *(p+3) << endl; 
    
    // We can also increment using the increment operator
    
    cout << (p++) << endl;  // printing array address and incrementing p
    cout << (++p) << endl;  // incrementing p again and printing array address
    
    cout << *(p++) << endl; // printing value at array address and incrementing p again
    cout << *(++p) << endl; // incrementing p again and printing value at array address
    
    return 0;
}


