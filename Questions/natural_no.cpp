//Find sum of n natural number using loop 
#include<iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       sum = sum + i;
    }
    cout << "Sum of n natural number is "<< sum;
    return 0;
}

