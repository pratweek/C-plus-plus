#include<bits/stdc++.h>
using namespace std;
int main(){
    float a = 10.23;
    int b = a;
    cout<<b<<endl;; //implicit

    float c = 15.87;
    cout<< (int)c<<endl;; //explicit

    int d = 23;
    cout<<(float)d<<endl;

    int e = 87;
    float f = e;
    cout<<f;


    return 0;
}