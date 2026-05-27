#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int rollNo;
    string name;
    int marks;
};
int main(){
    Student s1;
    cin>>s1.name;
    cin>>s1.marks;
    cin>>s1.rollNo;
    cout<<s1.name<<endl;
    cout<<s1.marks<<endl;
    cout<<s1.rollNo;
    return 0;

}