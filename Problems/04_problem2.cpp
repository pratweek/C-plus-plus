#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    try{
        if (a==1){
            throw 3.14;
        }
        else if(a==3){
            throw "Error";
        }
        else cout<<"No Exception "<<endl;
    }
    catch(int e){
        cout<<"Integer exception"<<endl;
    }
    catch(double e){
        cout<<"Double exception"<<endl;
    }
    catch (const char *e){
        cout<<"Strong exception "<<e<<endl;
    }
    cout<<"Program continues"<<endl;
    return 0;
}