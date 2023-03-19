#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

int fib(int n){
    if(n < 2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    cout << "enter the value of a "<< endl;
    cin >> a;

    cout << "the factorial of a no is " << factorial(a)<<endl;
    cout << "the no among the fibonacci series is " << fib(a)<<endl;

    return 0;
}