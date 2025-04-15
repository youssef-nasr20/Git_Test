#include <iostream>
 using namespace std;

 int main() {
   int number;
   bool prime = true;
   char x;
  while (true) {
        cout << "Enter your number ! ";
        cin >> number;

        if(number <= 1){
             cout << number <<"Is not prime "<<endl;
            continue;
        }
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                prime = false;  
                break;
                }
            }
        if (prime) {
            cout << number << " It is prime " << endl;
        } 
        else {
            cout << number << " Is not prime "<< endl;
        }
        cout<<"Do you want continue ? ( y / n )"<<endl;
        cin>> x;
            
        if( x == 'n' ){
            break;
        }
    }
      return 0;
 }      