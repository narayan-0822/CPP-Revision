#include <iostream>

using namespace std;

int main(){
    
                                // SELECTION CONTROL STRUCTURE - IF ELSE
    
    int age;
    
    cout << "Enter your age: " ;
    cin >> age;
    
    if (age<18){
        cout << endl << "You cannot drink or drive in the US" << endl;
    } 
    
    else if(age>18 && age<21){
        cout << "Your can drive but cannot drink in the US" << endl;
    }
    else{
        cout << "You are allowed to drink or drive in the US" << endl;
    }


                                // SELECTION CONTROL STRUCTURE - SWITCH CASE 
    
    /* If break keyword is not used it will keep jumping to the next cases as long as 
       the switch case doesnt end or encounters a break keyword */
    
    switch (age){
        
        case 18: 
        cout << "You just became an adult legally" << endl;
        break;
        
        case 21: 
        cout << "You just became an adult of legal drinking age in the US" << endl;
        break;
        
        case 13: 
        cout << "You just became a teenager" << endl;
        break;
        
        case 50: 
        cout << "You are half a century old" << endl;
        break;
        
        default:
        cout << "This birthday is not that special" << endl;
        break;
    }    
    
    return 0;
}





