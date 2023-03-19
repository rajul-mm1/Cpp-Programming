#include <iostream>
using namespace std;

class employee
{

public:
    int id;
    int salary = 1000;

    employee(int iddd)
    {
        id = iddd;
    }

    employee() {}
};

/*INHERITANCE

1. SYNTAX :-

class {{derived class name}} : {{visibility mode}} {{base class name}}
{
    class member/funtions/etc;
};

2. Double curly braces indicate that it will be replaced by some other name.

3. By default the visibility mode is private.

4. Private visibility mode - all the public members of the base class become private in the derived class.

5. Public visibility mode - all the public members of the base class remain public members of the derived class.

6. The private members of the base class can never be inherited.

*/

class programmer : public employee
{

public:
    int langcode; // this will not be accessed by the object skill if it is not placed inside the public section even if the visibility mode is public
    programmer()
    {
        // id = inpid;
        cout << "enter the langcode" << endl;
        cin >> langcode;
        cout << "enter the id" << endl;
        cin >> id;
    }
};

int main()
{
    employee rajul(10), shreya(20);
    cout << rajul.salary << endl;
    cout << shreya.salary << endl;
    cout << shreya.id << endl;
    cout << rajul.id << endl;

    // programmer skill(500);
    programmer skill;
    cout << "the language code is " << skill.langcode << endl;
    cout << "the id is " << skill.id;

    return 0;
}
