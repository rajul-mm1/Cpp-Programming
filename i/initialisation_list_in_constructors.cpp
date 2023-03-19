#include <iostream>
using namespace std;

class test
{
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(j + i)
    // test(int i, int j) : a(i), b(j * i)
    // test(int i, int j) : a(i * 2), b(j)
    // test(int i, int j) : b(j), a(i + b) --> this will give an error as the variable that is declared first should be initialised first;

    test(int i, int j) : a(i), b(j + a)
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{

    test obj(4, 6);

    return 0;
}

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/