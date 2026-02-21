//Code for prime number with sieve of eratosthreus
#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    vector<bool> isPrime(n+1, true);
    for (int i = 0; i <= n; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i*i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i*i; j <= n ; j+=i)
            {
                isPrime[j]= false;
            }
            
        }
        
    }
    for (int i = 2; i <= n; i++)
    {
     if (isPrime[i])
    {
      cout<<i<<" ";
    }
    
        
    }
    return 0;
    }
    
    
