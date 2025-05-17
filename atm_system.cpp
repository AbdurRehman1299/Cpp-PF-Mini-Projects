#include<iostream>
using namespace std;
int main(){
    double balance = 10000.00;
    int choice;
    double amount;
    
    do{
        cout << "\n==========ATM Menu==========\n";
        cout << "       1. Check Balance\n";
        cout << "       2. Deposit\n";
        cout << "       3. Withdraw\n";
        cout << "       4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                if(amount > 0){
                    balance += amount;
                    cout << "Amount deposit successfully." << endl;
                }
                else{
                    cout << "Invalid amount." << endl;
                }
                break;
            case 3:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if(amount > 0 && amount <= balance){
                    balance -= amount;
                    cout << "Amount withdraw successfully." << endl;
                }
                else{
                    cout << "Insufficient balance." << endl;
                }
                break;
            case 4:
                cout << "Thank you for using ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }while(choice != 4);
    
    return 0;
}