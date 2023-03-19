#include <iostream>
#include <string>
using namespace std;

class binary
{
private: // by default every class member is private.
    string s;
    void chk_bin();

public:
    void read();
    // void chk_bin();
    void ones_complimentary();
    void display();
};

void binary ::read()
{
    cout << "enter the value of a no " << endl;
    cin >> s;
}

void binary ::chk_bin()
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary no" << endl;
            exit(0); // exit(0) which means successful termination of the program, i.e. program has been executed without any error or interrupt.
        }
        else
        {
            cout << "Yeahhh its a binary no" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complimentary()
{
    chk_bin();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
           
        }
        else
        {
            s.at(i) = '0';
          
        }
    }
}

void binary ::display()
{
    cout << "Displaying binary nos after complimenting" << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;

    b.read();

    // b.chk_bin(); --> this will throw an error as its private now and cannot be accessed directly.

    b.ones_complimentary();

    b.display();

    return 0;
}
