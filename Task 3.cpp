#include <iostream>
 using namespace std;

 int main() {
   int number;
   char x;
    
    while(true){ 

        cout<<"Enter your number ! ";
        cin>>number;
            if(number %2 ==0){
                cout<<"The number is even"<<endl;
            }
            else{
                cout<<"the number is odd"<<endl;
            }

            

        cout<<"Do you want continue ? ( y / n )"<<endl;
        cin>> x;
            
        if( x == 'n' ){
            break;
        }
    }
 }