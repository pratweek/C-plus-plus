#include<bits/stdc++.h>
using namespace std;
class B;
class A {
    int x;
    public:
    void setX(int val1){
        x = val1;
    }
    void disX(){
        cout<<"Value of x is : "<<x<<endl;
    }
    friend B add(A,B);
};
class B {
    int y;
    int result;
    public:
    void setY(int val2){
        y =val2;
    }
    void disY(){
        cout<<"Value of y is "<<y<<endl;
    }
    void display(){
        cout<<"Sum of two numbers is "<<result<<endl;
    }
    friend B add(A,B);

};
B add(A obj1, B obj2){
    obj2.result = obj1.x + obj2.y;
    return obj2; 
}
int main(){
    A a1;
    B b1, result;
    a1.setX(10);
    b1.setY(5);
    result = add(a1,b1);
    result.display();
    return 0;

}
