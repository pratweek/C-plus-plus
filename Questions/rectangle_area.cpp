#include<iostream> 
using namespace std;
class rectangle {
    public:
    float length, breadth, area;
    void display(){
        area = length*breadth;
        cout << "Area of rectangle is " << area;
    }
    
};
int main () {
    rectangle t;
    float a,b;
    cout << "Enter length ";
    cin >> a;
    cout << "Enter breadth " ;
    cin >> b;
    t.length = a ;
    t.breadth = b;
    t.display();
    return 0;


}
