#include <iostream>
using namespace std;


int main() {
    double num1, num2, result;
    char operation;
       
        cout<< "Enter the first number ";
        cin>> num1;
        cout<< "Enter the second number ";
        cin>> num2;
        cout<< "Enter the operation ";
        cin>> operation;
    
    if (operation == '+') {
        result = num1 + num2;
        }
    else if (operation == '-') {
        result = num1 - num2;
        }
    else if (operation == '*') {
        result = num1 * num2;
        }
    else if (operation == '/') {
        result = num1 / num2;
        }
    else{
        cout<<"Incorrect operation"<< endl;
        }
    
    cout << "The result is :  " << result << endl;

    return 0;


    
}

    