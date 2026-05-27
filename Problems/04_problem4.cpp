#include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream outfile("data.txt");
    string name;
    int roll;
    int marks;
    
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter roll no ";
    cin>>roll;

    cout<<"Enter marks";
    cin>>marks;

    outfile<<"Name: "<<name<<endl;
    outfile<<"Roll no: "<<roll<<endl;
    outfile<<"Marks: "<<marks<<endl;
    outfile.close();

    ifstream infile("data.txt");
    string line;
    cout<<"\n---File contents---\n";
    while(getline(infile,line)){
        cout<<line<<endl;
    }
    infile.close();
    return 0;

}