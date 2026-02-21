#include<iostream>
using namespace std;
int main (){
    int marks;
    cout << "Enter Marks";
    cin >> marks;
    if (marks < 25){
        cout << " Grade G";
    }
    else if (marks <= 25 && marks <= 44){
        cout << "Grade F";
    }
    else if (marks <= 45 && marks <= 49){
        cout << "Grade E";
    }
    else if ( marks <= 59){
        cout << "Grade E";
    }
    else if ( marks <= 69){
        cout << "Grade D";
    }
    else if ( marks <= 79){
        cout << "Grade C";
    }
    else if  (marks <= 100){
        cout << "Grade A";
    }
    return 0;
    
}