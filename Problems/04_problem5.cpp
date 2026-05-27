#include<bits/stdc++.h>
using namespace std;
int main(){
    //append data
    ofstream outfile("data.txt", ios::app);

    string data;
    cout<<"Enter data to append: ";
    getline(cin,data);

    outfile << data <<endl;
    outfile.close();

    //copy data
    ifstream infile("data.txt");
    ofstream copyfile("copy.txt");

    string line;
    cout<<"\nCopying content...\n";
    while(getline(infile,line)){
        copyfile<<line<<endl;
    }

    //display end of file
    if(infile.eof()){
        cout<<"End of the file is reached \n";

    }
    infile.close();
    copyfile.close();

    //display copy content
    ifstream displayfile("copy.txt");
    cout<<"\n---Copied File contents ---\n";
    while (getline(displayfile, line)){
        cout<<line <<endl;
    }
    displayfile.close();
    return 0;

}