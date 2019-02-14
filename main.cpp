#include <iostream>

using namespace std;

void printTitle(int cnt){
    cout << "You have guessed " << cnt << " times" << endl;
    cout << "Guess a number between 1 and 100000: " << endl;
}
    
bool guess(int num, int cnt){
    int guessNum;
    printTitle(cnt);
    cin >> guessNum;
    if (guessNum < num){
        cout << "your number is too low, guess again." << endl;
        return true;
    }
    if (guessNum > num){
        cout << "your number is too high, guess again." << endl;
        return true;
    }
    if (guessNum == num){
        cout << "good job, you got it!" << endl;
        return false;
    }
    return 0;
}

int main(){
    bool failed = true;
    int number = 73;
    int count = 0;
    
    while(failed){
        failed = guess(number, count);
        count++;  
    }
    cout << "It took you " << count << " tries."  << endl;
}
