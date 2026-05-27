#include<bits/stdc++.h>
using namespace std;
class Account{
    private:
    int account_no;
    int bank_pin;
    public:
    string name;
    double amount;
    void setData(){
        cin>>account_no;
        cin>>bank_pin;
        cin>>name;
        cin>>amount;
    }
    void getData(){
        cout<<account_no<<endl;
        cout<<bank_pin<<endl;
        cout<<name<<endl;
        cout<<amount<<endl;

    }
};
int main(){
    Account a1;
    a1.setData();
    a1.getData();
}