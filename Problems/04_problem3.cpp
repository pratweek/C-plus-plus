#include<bits/stdc++.h>
using namespace std;
template <typename T>
T findMax(T a, T b){
    if(a>b){
        return a;
    }
    else return b;
}


int main(){
    cout<<"Max integer "<<findMax(5,6)<<endl;
    cout<<"Max float "<<findMax(5.6,5.20)<<endl;
    cout<<"Max char "<<findMax('a','k')<<endl;
    return 0;

}