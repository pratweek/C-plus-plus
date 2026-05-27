#include<bits/stdc++.h>
using namespace std;
class A {
    public: 
     A(){
        cout<<"Constructor is called "<<endl;

    }
    ~A(){
        cout<<"Descructor is called "<<endl;
    }
};
int main(){
    A a1;
    return 0;
}