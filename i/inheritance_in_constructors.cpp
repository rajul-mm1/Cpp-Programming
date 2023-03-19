#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Constructor for base1 has started" << endl;
    }
    void printdata1()
    {
        cout << "The value of data 1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int a)
    {
        data2 = a;
        cout << "Constructor for base2 has started" << endl;
    }
    void printdata2()
    {
        cout << "The value of data 2 is " << data2 << endl;
    }
};

class derived : public base1, public base2  //if here the sequence of base1 and base2 changes then the order of constructor execution will also be different.
{
    int derived1;
    int derived2;

public:
    derived(int a, int b, int c, int d) : base1(c), base2(d)
    {
        derived1 = a;
        derived2 = b;
        cout << "derived class constructor started" << endl;
    }

    void printdata3()
    {
        cout << "derived1 = " << derived1 << endl;
        cout << "derived2 = " << derived2 << endl;
    }
};

int main()
{
    base1 mango(5);
    mango.printdata1();

    base2 candle(10);
    candle.printdata2();
    
    derived apple(4, 5, 8, 9);
    
    apple.printdata1();
    
    apple.printdata2();
    
    apple.printdata3();
    
    return 0;
}

/*ORDER OF CONSTRUCTOR EXECUTION IN INHERITANCE

CASE 1:
 class A : public B, public C
 {
    **Order of execution -> first B() then C() and then A();
 }
 
CASE 2:
 class A : public C, public B
 {
    **Order of execution -> first C() then B() and then A();
 } 

CASE 3:
 class A : public C, virtual public B
 {
    **Order of execution -> first B() then C() and then A();
 } 

Case4:
class A: public B{
   **Order of execution of constructor -> first B() then A()
};

*/
