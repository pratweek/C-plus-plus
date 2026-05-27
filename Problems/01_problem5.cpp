#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int largest;
    cin>>a>>b>>c;
    if(a>=b && a>=c) largest = 1;
    else if (b>=a && b>=c) largest = 2;
    else largest = 3;
    switch(largest){
        case 1 : cout<<a;
        break;
        case 2 : cout<<b;
        break;
        case 3: cout<<c;
        break;
    }
}