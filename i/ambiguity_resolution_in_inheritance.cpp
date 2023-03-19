#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "hello i m tia" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "hello i m rajul" << endl;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        base2 :: greet(); // this is used to tell which function will be inherited in the derived class as there will be ambiguity because of same name.
        // base1 :: greet();
    }
};

class amb1
{

public:
    void say()
    {
        cout << " I m a BCA Cloud Computing student. " << endl;
    }
};

class derived2 : public amb1
{
public:
    // if the same name function is made but one is present in base class and other one in derived class then the function of the derived class will run. To make the function for the base class to run then write the ambiguity resolution syntax: class_name :: function_name

    void say()
    {
        cout << "Hello guys i m a 2nd sem student. " << endl;
    }
};

int main()
{
    base1 obj1;
    obj1.greet();

    base2 obj2;
    obj2.greet();

    derived obj3;
    obj3.show();

    derived2 obj;
    obj.say();

    return 0;
}