#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; //default value of static var is 0.

public:
    void setdata()
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }

    void getdata()
    {
        cout << "The id of the employee is " << id << " and the employee no is " << count << endl;
    }

    static void getcount()
    {

        // cout<<id; --> this throws an error as static functions only access static variables.

        cout << "The value of count is " << count << endl;
    }
};

int employee :: count= 200; //can or cannot be initialised here but cannot be initialised inside the class.

int main(){
    employee rajul, yesh, teddy;

    rajul.setdata();
    rajul.getdata();
    employee :: getcount();

    yesh.setdata();
    yesh.getdata();
    employee :: getcount();

    teddy.setdata();
    teddy.getdata();
    employee :: getcount();

    return 0;
}