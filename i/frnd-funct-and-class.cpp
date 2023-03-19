#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealcomplex(complex, complex);  //funct declaration
    int sumCompcomplex(complex, complex);   //funct declaration
};

class complex
{
    int a;
    int b;
    friend int calculator ::sumRealcomplex(complex o1, complex o2);  //making frnds
    friend int calculator ::sumCompcomplex(complex o1, complex o2);  //making frnds

public:
    int setdata(int g, int h)
    {
        a = g;
        b = h;
    }

    void printdata()
    {
        cout << "The complex no is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealcomplex(complex o1, complex o2)  //func definition
{
    return (o1.a + o2.a);
}

int calculator ::sumCompcomplex(complex o1, complex o2)  //func definition
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setdata(10, 5);
    c1.printdata();

    c2.setdata(4, 5);
    c2.printdata();

    calculator calc;
    int res = calc.sumRealcomplex(c1, c2);   //func call
    cout << "The sum of real part of a no is " << res << endl;

    int resc = calc.sumCompcomplex(c1, c2);     //func call
    cout << "The sum of complex part of a no is " << resc << endl;

    return 0;
}