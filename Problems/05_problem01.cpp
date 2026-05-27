//overload + operator to add two 2D vector
#include<bits/stdc++.h>
using namespace std;
class Vectoradd{
    private:
    int first;
    int second;
    public:
    Vectoradd(int f =0 , int s =0 ){
        first = f;
        second = s;
    }
    Vectoradd operator+ (const Vectoradd &v){
    Vectoradd temp;
    temp.first = first + v.first;
    temp.second = second + v.second;
    return temp;
    }
    void display(){
        cout<<"The sum of two vectors is "<<first<<"i + "<<second<<"j"<<endl;
    }


};
int main(){
    Vectoradd v1,v2,v3;
    v1 = Vectoradd (3,5);
    v2 = Vectoradd(4,6);
    v3 = v1+v2;
    v3.display();
    return 0;


} 