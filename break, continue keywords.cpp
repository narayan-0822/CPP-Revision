#include <iostream>

using namespace std;

int main(){
    
    for(int i = 0; i<10; i++){
        if(i==3){
            cout << "The rest of the numbers are not printed because the loop was broken out because of the break keyword" << endl;
            break;
        }
        cout << i << endl;
    }
    
    for(int i = 0; i<10; i++){
        if(i==3){
            cout << "The number 3 is skipped because the 'continue' skipped the rest of the statements in this iteration of loop" << endl;
            continue;
        }
        cout << i << endl;
    }
    
    return 0;
}