#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int player_choose;
    string player_choice;
    cout << "Welcome to the Rock, Paper, & Scissor Game.";
    cout << "Let's start the Game!";
    cout << "\nPlease select one of the following:" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissor" << endl;
    cout << "\nEnter your choice: ";
    cin >> player_choose;
    if(player_choose == 1){
        player_choice = "Rock";
    }
    else if(player_choose == 2){
        player_choice = "Paper";
    }
    else if(player_choose == 3){
        player_choice = "Scissor";
    }
    else{
        cout << "Wrong choice! Exiting the game." << endl;
    }
    srand(time(NULL));
    int cpu_choose = rand() % 3 + 1; // Random number for choose the followings
    string cpu_choice;
    if(cpu_choose == 1){
        cpu_choice = "Rock";
    }
    else if(cpu_choose == 2){
        cpu_choice = "Paper";
    }
    else{
        cpu_choice = "Scissor";
    }
    cout << "\nPlayer Choice: " << player_choice << endl;
    cout << "CPU Choice: " << cpu_choice << endl;
    // Draw
    if(cpu_choice == player_choice){
        cout << "You both choose the same! The match has been drawn." << endl;
    }
    // Player Wins
    else if((player_choice == "Rock" && cpu_choice == "Scissor") || (player_choice == "Paper" && cpu_choice == "Rock") || (player_choice == "Scissor" && cpu_choice == "Paper")){
        cout << "\nCongratulations! You have won this game." << endl;
    }
    // Computer Wins
    else{
        cout << "\nSorry! Computer has won the game." << endl;
    }
}