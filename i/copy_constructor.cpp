#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()     //default constructor is necessary to call otherwise the constructor cannot be called.
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }

    // when no copy constructor is found, compiler supplies its own copy constructor
    number(number &obj)
    {
        cout << "copy constructor called!!!!!" << endl;
        a = obj.a;
    }

    number display()
    {
        cout << "the number is " << a << endl;
    }
};

int main()
{
    number n1, n2(120), n3(78), z;

    n1.display();
    n2.display();
    n3.display();

    z = n3;    //copy constructor doesnt invoked here, only the value of n3 is copied into z.
    z.display();

    number x(n2);   //copy constructor invoked
    x.display();

    number y = n1;    //copy constructor invoked
    y.display();

    return 0;
}