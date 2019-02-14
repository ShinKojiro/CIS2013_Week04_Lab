#include <iostream>

using namespace std;

void fizz(){
    cout << "FIZZ";
}

void buzz(){
    cout << "BUZZ";
}

int main(){
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            fizz();
            buzz();
        }
        else if(i % 3 == 0){
            fizz();
        }
        else if(i % 5 == 0){
            buzz();
        }
        else{
            cout << i;
        }
        cout  << endl;
    }
}
