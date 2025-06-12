#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    string command;
    cout << "Welcome to mini-terminal (type 'exit' to quit)" << endl;
    while(true){
        cout << ">> ";
        getline(cin, command);
        if(command == "exit"){
            break;
        }
        // Custom Commands
        if(command == "greet"){
            cout << "Hello! Welcome to your custom terminal." << endl;
            continue;
        }
        if(command == "clear"){
            system("cls");
            continue;
        }
        // Use system to execute OS-level commands
        system(command.c_str());
    }

    cout << "Goodbye!" << endl;
    return 0;
}