#include<bits/stdc++.h>
using namespace std;
class Rectangle {
    int length;
    int width;
    public:
    Rectangle(){
        length = 0;
        width = 0;
        cout<<"Default constructor"<<endl;
    }

    Rectangle(int l , int w){
        length = l;
        width = w;
        cout<<"Paramerized Constructor"<<endl;
    }

    Rectangle(const Rectangle &r){
        length = r.length;
        width = r.width;
        cout<<"Copy Constructor "<<endl;
    }
    void display(){
        cout<<"Area of rectangle "<<length*width;
    }

};
int main(){
    Rectangle r1;
    r1.display();

    Rectangle r2 (10,5);
    r2.display();

    Rectangle r3(r2);
    r3.display();
    return 0;


}
