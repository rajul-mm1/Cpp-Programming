# include <iostream>
using namespace std;

int main(){

    int a = 15;
    int & b = a;

    cout << a << "\n";
    cout << b;

    return 0;
}