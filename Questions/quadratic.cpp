//Code to find check nature of roots of quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    float root1,root2;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    int d = (b*b) -(4*a*c);
    if(d>0){
    root1 = (-b+sqrt(d))/(2*a);
    root2 = (-b-sqrt(d))/(2*a);
    cout<<"Roots are real and distinct"<<endl;
    cout<<"Roots are "<<root1<<" and "<<root2;
    }
    else if (d==0)
    {
       root1 = (-b)/(2*a);
       cout<<"Roots are real and equal"<<endl;
       cout<<"Roots are "<<root1<<" and "<<root1; 
    }
    else if (d<0)
    {
       root1 = (sqrt(-d))/(2*a);
       cout<<"Roots are imaginary"<<endl;
       cout<<"Roots are "<<(-b)/(2*a)<<" + "<<root1<<"i and "<<(-b)/(2*a)<<" + "<<root1<<"i";
    }
    return 0;
    
    
}