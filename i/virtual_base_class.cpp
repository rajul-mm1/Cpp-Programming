#include <iostream>
using namespace std;

class student
{
protected:
    int roll_num;

public:
    void set_num(int r)
    {
        roll_num = r;
    }
    void get_num()
    {
        cout << "The roll no is " << roll_num << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, bio;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        bio = m2;
    }
    void get_marks()
    {
        cout << "The maths marks are " << maths << endl;
        cout << "The bio marks are " << bio << endl;
    }
};

class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }

    void get_score()
    {
        cout << "The score for the sports match is " << score << endl;
    }
};

class result : public test, public sports
{
protected:
    float result, percent;

public:
    void display()
    {
        get_num();
        get_marks();
        get_score();
        result = maths + bio + score;
        percent = (result / 3) * 100;
        cout << "The total score for the student is " << result << endl;
        cout << "The total percentage for the student is " << result << " %." << endl;
    }
};

int main()
{
    result rajul;

    rajul.set_num(100);

    rajul.set_marks(99.5, 88.4);

    rajul.set_score(95.5);

    rajul.display();

    return 0;
}

/*VIRTUAL BASE CLASS

1. Prevents the duplication of the same variable by avoiding it to pass again and again to the derived class.

2. Also prevents ambiguity by providing a way where the variable would be passed only once.

INHERITANCE

1. student --> test
2. student --> sports
3. test --> result
4. sports --> result
*/