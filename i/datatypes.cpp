# include <iostream>
using namespace std;

int c = 56;

int main(){

    int a, b, c;
    cout << "enter the value of a:\n";
    cin >> a;

    cout << "enter the value of b:\n";
    cin >> b;

    c = a+b;
    cout << "the sum is " << c << "\n";
    cout << "the global var is " << ::c << "\n \n";  //:: is called scope resolution operator used to access global variable
    
    cout << "********************************" <<endl;
    float d = 12.3f;        
    long double e = 12.3l;
    
    cout << "size of d is "<< sizeof(12.3) << "\n";
    cout << "size of d is "<< sizeof(12.3f) << "\n";
    cout << "size of d is "<< sizeof(12.3F) << "\n";
    cout << "size of e is "<< sizeof(12.3l) << "\n";
    cout << "size of e is "<< sizeof(12.3L) << "\n";

    cout << "value of d is " <<d << "\n";
    cout << "value of e is " <<e << "\n";
    return 0;
    }