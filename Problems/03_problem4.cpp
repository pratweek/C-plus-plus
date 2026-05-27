#include<bits/stdc++.h>
using namespace std;
class Shape {
    public:
    virtual void display(){
        cout<<"It is a shape"<<endl;
    }
};
class Rectangle: public Shape {
    public:
    void display(){
        cout<<"It is rectangle"<<endl;
    }
};
class Square : public Rectangle{
    public:
    void display(){
        cout<<"It is square"<<endl;
    }
};
int main(){
    Shape *s;
    Rectangle r;
    Square a;
    s = &r;
    s->display();
    s = &a;
    s->display();                         //function overidding is explample of runtime polymorphism 
   // both function in base and dervided class are same with same parameters

}
