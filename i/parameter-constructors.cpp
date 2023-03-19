#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // constructor declaration

    void printf()
    {
        cout << "The complex no is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y) // --> its a parameter constructor as it accepts 2 parameters
{
    a = x;
    b = y;
}

int main()
{
    complex c1(4, 5); //--> implicit declaration
    c1.printf();

    complex c2 = complex(10, 14); // --> explicit declaration
    c2.printf();

    return 0;
};