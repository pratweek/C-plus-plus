//Finding all prime numbers in a given range
#include<iostream>
using namespace std;
int main(){
    int low_limit,up_limit;
    cout<<"Enter lower limit: ";
    cin>>low_limit;
    cout<<"Enter upper limit: ";
    cin>>up_limit;
    
     for (int num = low_limit; num <= up_limit; num++)
     {
        if (num<=1)
        {
            continue;  //continue skips the further execution of the loop and moves to the next iteration if 1 or 0 is encountered
        }
        bool isPrime = true;
        for (int i = 2; i*i <= num; i++)
        {
           if (num%i==0)
           {
            isPrime = false;
            break;
           }
           
        }
        if (isPrime == true)
        {
            cout<<num<<" ";
        } 
     }
     return 0;
}