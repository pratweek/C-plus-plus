//code for armstrong number
// eg: 153 is armstrong number because 1^3 + 5^3 + 3^3 = 153
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,no_of_digits=0,rem,sum=0;
    cout<<"Enter number: ";
    cin>>num;
    int temp = num;
    while(temp>0){
        temp = temp/10;
        no_of_digits ++;
    }
    temp = num;
    while(temp>0){
        rem = temp%10;
        sum = sum + (int)pow(rem,no_of_digits);
        temp = temp/10;
    }
    if (sum == num){
        cout<<"Number is armstrong";
        }
    else{
        cout<<"Number is not armstrong";
    }
    return 0;
}