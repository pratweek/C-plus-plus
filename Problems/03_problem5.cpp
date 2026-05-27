#include<bits/stdc++.h>
using namespace std;
int add(int a, int b){
    return a+b;
}
float add(float a, float b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}
class Complex{
    private:
    float real;
    float imag;
    public:
    Complex(float r=0,float i = 0){
        real = r;
        imag = i;
    }
    Complex operator+ (const Complex &c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp; 

    }
    void display(){
        cout<<real<<" + "<<imag<<" i "<<endl;
    }
};
int main(){
    cout<<add(1,2)<<endl;
    cout<<add(2.3,4.3)<<endl;
    cout<<add(2.4737643,5.595893)<<endl;
    Complex c1,c2,c3;
    c1 = Complex (2,3);
    c2 = Complex (4,6);
    c3 = c1+c2;
    cout<<"Sum of complex number is ";
    c3.display();
    return 0;

}