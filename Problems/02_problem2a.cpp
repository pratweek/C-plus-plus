#include<bits/stdc++.h>
using namespace std;
class Base {
    private:
    int rollno;
    int marks;
    public:
    void setData(int r, int m){
        rollno = r;
        marks = m;

    }
    void getData(){
        cout<<"roll no"<<rollno<<endl;
        cout<<"marks"<<marks<<endl;
    }
     
};
int main(){
    Base b1;
    b1.setData(23,45);
    b1.getData();
    return 0;
}