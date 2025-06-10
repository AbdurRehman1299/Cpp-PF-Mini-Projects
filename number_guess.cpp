#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int difficulty;
    int chances = 0;
    int guess;
    bool guessedCorrectly = false;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 0 and 100." << endl;
    cout << "\nPlease select the difficulty level:" << endl;
    cout << "1. Easy (10 chances)\n2. Medium (5 chances)\n3. Hard (3 chances)" << endl;
    cout << "\nEnter your choice: ";
    cin >> difficulty;
    if(difficulty == 1){
        chances = 10;
        cout << "Great! You have selected the Easy difficulty level." << endl;
        cout << "You have " << chances << " to guess the correct number." << endl;
    }
    else if(difficulty == 2){
        chances = 5;
        cout << "Great! You have selected the Medium difficulty level." << endl;
        cout << "You have " << chances << " to guess the correct number." << endl;
    }
    else if(difficulty == 3){
        chances = 3;
        cout << "Great! You have selected the Hard difficulty level." << endl;
        cout << "You have " << chances << " to guess the correct number." << endl;
    }
    else{
        cout << "Wrong difficulty selection! Please try again." << endl;
    }
    cout << "Let's start the game!" << endl;
    srand(time(NULL));
    int target = rand() % 101; // Numbers between 0 to 100
    for(int i = 1; i <= chances; i++){
        cout << "\nEnter your guess: ";
        cin >> guess;
        if(guess == target){
            cout << "Congratulations! You guessed the correct number in " << i << " attempts." << endl;
            guessedCorrectly = true;
            break;
        }
        else if(guess > target){
            cout << "Incorrect! The number is less than " << guess << endl;
        }
        else{
            cout << "Incorrect! The number is greater than " << guess << endl;
        }
    }
    if(!guessedCorrectly){
        cout << "\nSorry! You've used all your chances. The correct number is: " << target << "." << endl; 
    }
    return 0;
}