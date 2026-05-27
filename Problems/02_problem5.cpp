#include<bits/stdc++.h>
using namespace std;

class B;

class A {
private:
    int a, b;
    int c;

public:
    void getSum() {
        cin >> a >> b;
        c = a + b;
    }

    int getC() {
        return c;
    }

    friend int add(A, B);
};

class B {
private:
    int d;

public:
    void getSquare(int c) {
        d = c * c;
    }

    friend int add(A, B);
};

int add(A obj1, B obj2) {
    return obj1.c + obj2.d;
}

int main() {
    A a1;
    B b1;

    a1.getSum();
    b1.getSquare(a1.getC()); 

    int final = add(a1, b1);
    cout << "Final result is " << final;

    return 0;
}
