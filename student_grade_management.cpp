#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "How many student you want to add?: ";
    cin >> size;
    string name[size];
    float marks[size];

    for(int i = 0; i < size; i++){
        cout << "Enter the name of student: ";
        cin.ignore();
        getline(cin, name[i]);
        cout << "Enter the marks of student: ";
        cin >> marks[i];
    }

    cout << "\n+-------------------------------------------------+" << endl;
    cout << "+------------------Student Grades-----------------+" << endl;
    for(int i = 0; i < size; i++){
        char grade;
        float m = marks[i];
        if(m >= 90){
            grade = 'A';
        }
        else if(m >= 80){
            grade = 'B';
        }
        else if(m >= 70){
            grade = 'C';
        }
        else if(m >= 60){
            grade = 'D';
        }
        else{
            grade = 'F';
        }
        cout << "Student Name: " << name[i]
             << " | Obtained Marks: " << marks[i]
             << " | Grade: " << grade << endl << endl;
    }
    
    return 0;
}
