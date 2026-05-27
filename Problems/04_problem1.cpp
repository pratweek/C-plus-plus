#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    try {
        if (b==0){
            throw b;
        }
    int ans = a/b;
    cout<<ans<<endl;
}
catch (int b){
    cout<<"Error, division by zero"<<endl;
}
cout<<"continue after handling"<<endl;
return 0;
    }

