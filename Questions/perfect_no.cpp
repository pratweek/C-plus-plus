//Program for perfect number 
//A perfect number is a positive number that is equal to the sum of its proper divisors (excluding the number itself).
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0){
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        cout<<"Number is perfect";
    }
    else{
        cout<<"Number is not perfect";
    }

    return 0;
    
    
}