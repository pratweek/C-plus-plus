#include<bits/stdc++.h>
using namespace std;
class Student{
    public: 
    string name;
    int rollNo;
    string dept;
    void setData();
    void getData();
};
void Student :: setData(){
    cin>>name;
    cin>>rollNo;
    cin>>dept;

}

void Student :: getData(){
    cout<<name<<endl;
    cout<<rollNo<<endl;
    cout<<dept<<endl;

}
int main(){
    Student s1;
    s1.setData();
    s1.getData();


}