#include<iostream>
using namespace std;
int main () {
    string str1 = "Visual Studio";
    int len = str1.size();
    cout << "Initial Value "<< str1[len-1];
    str1[len-1] = 'z'; // do not use ""
    cout << "\nFinal Value " << str1[len-1];
    return 0;

}