//Area of rectangle using constructor 
#include<iostream>
using namespace std;
class rectangle {
    public :
    float length, breadth, area;

    rectangle(float l , float b){                      //constructor
        length = l; 
        breadth = b;
    }

    void display(){
        area = length*breadth;
        cout <<"Area of the rectangle is "<< area;
    }
};
int main() {
    float a,b;
    cout << "Enter length ";
    cin >> a;
    cout << "Enter breadth ";
    cin >> b;
    rectangle t(a,b);
    t.display();
    return 0 ;
}

/*
Benefits of using constructor 
1. Data is protected and cannot be changed wrongly. (Encapsulation)
2. If you forget to assign values before calling display(), area may be garbage value.
    Constructor avoids this problem because values are always initialized. 
3. the values of length and breadth are set at the time of object creation.
*/

//A constructor is a special member function of a class that is automatically executed when an object is created and is used to initialize the data members of the class.