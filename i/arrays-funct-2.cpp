#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;
public:
    void setdata()
    {
        salary = 122;
        cout << "Enter the id " << endl;
        cin >> id;
        
    }

    void getdata()
    {
        cout << "The id of the employee is " << id << endl;
    }
};

int main(){
    employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }

    return 0;
    
}