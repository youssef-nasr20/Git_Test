#include <iostream>
using namespace std;

int big( int num1 , int num2 , int num3);

int main(){
int num1 ,num2 ,num3;
cout<<"Enter three number ! "<<endl;
cin>>num1>>num2>>num3;
cout<< "res is  "<<big(num1,num2,num3)<<endl;


}
int big( int num1 ,int num2 , int num3){


    if (num1 >= num2 && num1 >= num3){
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        return num2;

    }
    else if (num3 >= num1 && num3 >= num2)
    {
        return num3;

    }
}
