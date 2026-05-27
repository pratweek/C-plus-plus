#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 5, y=3,z;
    z = x++ + --y*2;
    cout<<z;
    return 0;
}
//Precedence
//--y
//*
//+
//x++