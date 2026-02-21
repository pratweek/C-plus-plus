//code to check wether a number is prime or not
#include<iostream>
using namespace std;
int main(){
    int num,check;
    bool isPrime= true;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<=1){
        isPrime = false;
    }
    else{
    for (int i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            isPrime = false;
            break;
        }
    }

        
    }
        if (isPrime==true)
        {
            cout<<"Number is prime";
        }
        else{
            cout<<"Number is not prime";
        }
        return 0;
        
    }
    
    
    
