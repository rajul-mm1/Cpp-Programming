#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;
    friend complex sumcom(complex o1, complex o2); // friend functions can access public members only and not the private ones as they r not considered a member of the class.

public:
    int setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printdata()
    {
        cout << "Your complex no is " << a << "+" << b << "i" << endl;
    }
};

complex sumcom(complex o1, complex o2)
{
    complex o3;

    o3.setdata((o1.a + o2.a), (o1.b + o2.b)); //class funct are accessed by frnd fucnt as --> objname.memberfunctname;
    return o3;
}

int main(){
    complex c1, c2, sum;
    c1.setdata(4,5);
    c1.printdata();

    c2.setdata(7,1);
    c2.printdata();

    sum = sumcom(c1,c2);  //frnd funct can be accessed as obj_name.frnd_funct_name; and also objects are passed as arguments.
    sum.printdata();

    return 0;
}