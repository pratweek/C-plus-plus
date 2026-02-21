// code for strong number
// eg: 145 is strong number because 1! + 4! + 5! = 145
#include<iostream>
using namespace std;
int main(){
    int num,temp,sum=0,rem;
    cout << "Enter number: ";
    cin >> num;
    temp = num;
    while (temp >0)
    {
        rem = temp%10;
        int fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact=fact*i;
        }
        temp = temp/10;
        sum = sum + fact;
        
    }
    if(sum == num){
        cout<<"Number is strong";
    }
    else{
        cout<<"Number is not strong";
    }
    return 0;
    
    
}