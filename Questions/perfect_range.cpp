//code to find perfect number in range
#include<iostream>
using namespace std;
int main(){
    int low_limit, up_limit;
    cout<<"Enter lower limit: ";
    cin>>low_limit;
    cout<<"Enter upper limit: ";
    cin>>up_limit;
    for (int num = low_limit; num <= up_limit; num++)
    {
        int sum =0;
        for (int i = 1; i < num; i++)
        {
           if (num%i==0)
           {
            sum+=i;
           }     
        }
        if (sum==num && num!= 0){
           cout<<num<<" is a perfect number"<<endl;

         }

        
        
    }
        return 0;

}