//Code for plaindrome or not
// eg: 121 on reverse is 121 so it is plaindrome
#include<iostream>
using namespace std;
int main(){
    int num, rev=0 , rem,temp;
    cout<<"Enter number: ";
    cin>>num;
    temp = num;
    while(temp>0){
        rem = temp%10;
        rev = rev*10 + rem;
        temp = temp/10;
    }
    if (rev == num){
        cout <<"NUmber is plaindrome";
    }
    else{
        cout<<"Number is not plaindrome";
    }
    return 0;

}
