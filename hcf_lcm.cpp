#include<iostream>
using namespace std;

int HCF(int n1, int n2){
    int hcf;
    for (int i = 1; i <= n2; i++){
        if(n1 % i == 0 && n2 % i == 0){
            hcf = i;
        }
    }
    return hcf;
}
int LCM(int n1, int n2){
    // Logic-based LCM
    int lcm;
    if(n2 > n1){
        lcm = n2;
    }
    else{
        lcm = n1;
    }
    do{
        if(lcm % n1 == 0 && lcm % n2 == 0){
            return lcm;
            break;
        }
        else{
            lcm++;
        }
    }while(true);
    // Find LCM using HCF
    // return (n1 * n2) / HCF(n1, n2);
}

int main(){
    int number1, number2;
    cout << "\nFind the H.C.F and L.C.M" << endl;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "LCM: " << LCM(number1, number2) << endl;
    cout << "HCF: " << HCF(number1, number2) << endl;
    return 0;
}