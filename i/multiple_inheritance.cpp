#include <iostream>
using namespace std;

class base1
{
protected:
    int base1;

public:
    void get_base1(int a)
    {
        base1 = a;
    }
};

class base2
{
protected:
    int base2;

public:
    void get_base2(int b)
    {
        base2 = b;
    }
};

class base3
{
protected:
    int base3;

public:
    void get_base3(int c)
    {
        base3 = c;
    }
};

class derived : public base1, public base2, public base3
{
protected:
    int result;

public:
    void show()
    {
        cout << "the value of base 1 is " << base1 << endl;
        cout << "the value of base 2 is " << base2 << endl;
        cout << "the value of base 3 is " << base3 << endl;

        result = base1 + base2 + base3;

        cout << "the result is " << result << endl;
    }
};

int main()
{
    derived obj;

    obj.get_base1(120);
    
    obj.get_base2(10);
    
    obj.get_base3(100);
    
    obj.show();

    return 0;
}