#include <iostream>
using namespace std;

class student
{
protected:
    int roll_num;

public:
    void set_roll_num(int);
    void get_roll_num();
};

void student ::set_roll_num(int r)
{
    roll_num = r;
}

void student ::get_roll_num()
{
    cout << "the roll no is " << roll_num << endl;
}

class exam : public student
{
protected:
    float physics;
    float maths;

public:
    void set_marks(float m1, float m2)
    {
        physics = m1;
        maths = m2;
    }

    void get_marks(void)
    {
        cout << "physics marks are: " << physics << endl;
        cout << "maths marks are: " << maths << endl;
    }
};

class result : public exam
{
protected:

    float percentage;

public:

    void display()
    {
        // set_roll_num(1052);   this is also possible, we can call these functions these way also.
        // set_marks(78,56);
        // get_roll_num();
        // get_marks();
        cout << "the percentage are: " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    result rajul;

    rajul.set_roll_num(500);
    
    rajul.get_roll_num();
    
    rajul.set_marks(98, 99);
    
    rajul.get_marks();
    
    rajul.display();
    
    return 0;
}