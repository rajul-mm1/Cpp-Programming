#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); // constructor declaration

    void printf()
    {
        cout << "The complex no is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)  // --> its a default constructor as it accepts no parameters
{
    a = 10;
    b = 15;
}

int main()
{
    complex c1, c2, c3;
    c1.printf();
    c2.printf();
    c3.printf();

        return 0;
}