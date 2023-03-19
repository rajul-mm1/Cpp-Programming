# include <iostream>
using namespace std;

int main(){
    
    int a = 10;
    int *b = &a;

    // address of operator(&)
    cout << "the address of a is " << &a <<endl;
    cout << "the address of a is " << b <<endl;

    // for finding the value dereferencing operator(*) is used
    cout << "the value of a is " << *b << "\n";

    // pointer to pointer
    int** c = &b;

    cout << "The address of b is " << c <<"\n";
    cout << "The value of stored at c is " << **c <<"\n";

    return 0;
}