#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}
//inline function is used to reduce the burdening of the compiler. By using this the compiler will keep the entire code over there only and reduce the time of it going back to compiler again and again.

int main(){
    int a,b;

    cout << "the value of a and b is ";
    cin >> a >> b;

    cout << "the product of a and b is " << product(a,b) << endl;
    cout << "the product of a and b is " << product(a,b) << endl;
    cout << "the product of a and b is " << product(a,b) << endl;
    cout << "the product of a and b is " << product(a,b) << endl;
    cout << "the product of a and b is " << product(a,b) << endl;
    cout << "the product of a and b is " << product(a,b) << endl;
    cout << "the product of a and b is " << product(a,b) << endl;
    cout << "the product of a and b is " << product(a,b) << endl;
    cout << "the product of a and b is " << product(a,b) << endl;

    return 0;
}