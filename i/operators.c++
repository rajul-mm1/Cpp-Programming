# include <iostream>
using namespace std;

int main(){

    int a = 15, b = 2;

    // arithmetic operators
    cout << "a + b is " << a + b << endl;
    cout << "a - b is " << a - b << endl;
    cout << "a * b is " << a * b << endl;
    cout << "a / b is " << a / b << endl;
    cout << "a % b is " << a % b << endl;    //%(modulo) operator doesn't work with floats and double coz no remainder is left
    cout << " a++ is " << a++ << endl;
    cout << " a-- is " << a-- << endl;
    cout << " --a is " << --a << endl;
    cout << " ++a is " << ++a << endl;

    // assignment operator --> '=' is called the assignment operator

    // comparison operator
    cout << "a > b is " << (a > b) << "\n";
    cout << "a < b is " << (a < b) << "\n";
    cout << "a <= b is " << (a <= b) << "\n";
    cout << "a >= b is " << (a >= b) << "\n";
    cout << "a == b is " << (a == b) << "\n";
    cout << "a != b is " << (a != b) << "\n";
    
    // logical operators
    cout << "(a == b) && (a<b) is " << ((a == b) && (a<b)) << "\n";
    cout << "(a == b) || (a>b) is " << ((a == b) || (a>b)) << "\n";
    cout << "!(a == b) is " << !(a == b) << "\n";
    
    return 0;
}