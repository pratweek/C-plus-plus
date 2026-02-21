#include<bits/stdc++.h>
using namespace std;
 /* Types of function 
 1. void
 2. return
 3. parameterised
 4. non parameterised
 */

 void printName(string name){  //takes name 
    cout << "Hello World " << name << endl;
 }
int  main () {
    string name;
    cin >> name;
     printName(name); //Passing name

     string name2;
     cin >> name2;
     printName(name2);
     return 0;
}