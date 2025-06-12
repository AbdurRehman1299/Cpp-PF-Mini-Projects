#include<iostream>
#include<fstream>

using namespace std;

const string DATA_FILE = "passwords.txt";
const string MASTER_PASSWORD = "admin123";

void addPassword(){
    string service, username, password;
    cout << "Enter service name (e.g. Gmail): ";
    cin.ignore();
    getline(cin, service);
    cout << "Enter the username: ";
    getline(cin, username);
    cout << "Enter the password: ";
    getline(cin, password);

    ofstream file(DATA_FILE, ios::app);
    if(file.is_open()){
        file << service << "|" << username << "|" << password << "\n";
        file.close();
        cout << "Saved successfully." << endl;
    }
    else{
        cerr << "Error saving data." << endl;
        return;
    }
}

void viewPasswords(){
    ifstream file(DATA_FILE);
    string service, username, password;
    bool empty = true;

    cout << "---------- Saved Passwords ----------" << endl;
    if(file.is_open()){
        while(getline(file, service, '|') && getline(file, username, '|') && getline(file, password)){

            if(service.empty() || username.empty() || password.empty()){
                continue;  // Skip the malformed lines
            }

            cout << "----------------------------" << endl;
            cout << "Service: " << service << endl;
            cout << "UserName: " << username << endl;
            cout << "Password: " << password << endl;
            empty = false;
        }
        file.close();
    }
    else{
        cerr << "Error loading data from " << DATA_FILE << "." << endl;
        return;
    }
    if(empty){
        cout << "No passwords saved yet." << endl;
    }
}

int main(){
    string enteredPassword;
    
    cout << "Enter the Master Password: ";
    getline(cin , enteredPassword);
    if(enteredPassword != MASTER_PASSWORD){
        cout << "Access denied!" << endl;
        return 1;
    }

    int choice;
    do{
        cout << "\n--- Password Manager ---" << endl;
        cout << "1. Add new password." << endl;
        cout << "2. View saved passwords." << endl;
        cout << "3. Exit." << endl;
        cout << "\nChoose and option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addPassword();
            break;
        case 2:
            viewPasswords();
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }while(choice != 3);
    return 0;
}