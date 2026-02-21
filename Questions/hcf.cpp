//code for hcf of two numbers
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>> num2;
    int min = (num1>num2) ? num1:num2;
    while(true){
        if (min%num1==0 && min%num2==0)
        {
            cout<<"The HCF of "<<num1<<" and "<<num2<<" is "<<min<<endl;
            break;
        }
        min++;
        
    }
    return 0;

}