# include <iostream>
using namespace std;

int main(){

    int a = 15;
    float b = 23.5;
    
    cout << "the value of a is " << float(a) << "\n";
    cout << "the value of b is " << int(b) << "\n";
    cout << "the value of b is " << (int)b << "\n";
    cout << "the value of a+b is " << a+ (int)b << "\n";
    cout << "the value of a+b is " << a+b << "\n";

    int c = int(b);
    int d = b;
    cout << "the value of c is " << c << "\n";
    cout << "the value of d is " << d;

    return 0;
}

