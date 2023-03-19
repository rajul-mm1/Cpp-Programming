#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void swap(c1 &, c2 &);

public:
    int a;
    void setdata()
    {
        cout<<"enter the value of num1 ";
        cin>>a;
        val1 = a;
    }

    void display()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void swap(c1 &, c2 &);

public:
    int b;     
    void setdata()
    {
        cout<<"enter the value of num2 ";
        cin>>b;
        val2 = b;
    }

    void display()
    {
        cout << val2 << endl;
    }
};

void swap(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 num1;
    num1.setdata();

    c2 num2;
    num2.setdata();
    swap(num1, num2);

    cout <<"the value of num1 after swapping ";
    num1.display();

    cout <<"the value of num2 after swapping ";
    num2.display();

    return 0;

}