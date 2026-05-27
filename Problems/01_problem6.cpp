#include<bits/stdc++.h>
using namespace std;
struct result
{
    int sum;
};

int sum(int *arr, int size){
    int sum =0;
    for (int i = 0; i < size; i++)
    {
        sum +=arr[i];
    }
    return sum;
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int t = sum(a,n);
    result r;
    r.sum = t;
    cout<<r.sum;


    
}