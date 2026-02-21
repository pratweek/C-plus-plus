//code for prime number with square root method
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    bool isPrime = true;
    cout<< "Enter number: ";
    cin>>num;
    if (num<= 1)
    {
        isPrime = false;
    }
    else{
     for (int i = 2; i<=sqrt(num); i++)
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
        cout<<num<<" is a prime number.";
     }
     else{
        cout<<num<<" is not a prime number.";
    
}return 0;
}