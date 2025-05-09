#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "How many players you want to add?: ";
    cin >> size;
    string name[size];
    int goals[size];
    int numbers[size];

    int totalGoals = 0;
    int topPlayer = 0;

    for(int i = 0; i < size; i++){
        cout << "Enter the name of player: ";
        cin.ignore();
        getline(cin, name[i]);
        cout << "Enter Jersey number: ";
        cin >> numbers[i];
        cout << "Enter goals scored: ";
        cin >> goals[i];

        totalGoals += goals[i];

        if(goals[i] > goals[topPlayer]){
            topPlayer = i;
        }
    }

    cout << "+-------------------------+" << endl;
    cout << "+--------Team Info--------+" << endl;
    for(int i = 0; i < size; i++){
        cout << "Player" << i+1 << ": " << name[i]
             << " | Number: " << numbers[i]
             << " | Goals: " << goals[i] << endl;
    }

    cout << "\nTotal Goals: " << totalGoals << endl;
    cout << "Top Scorer: " << name[topPlayer]
         << " with " << goals[topPlayer] << " goals." << endl;
    
    return 0;
}