#include <iostream>
using namespace std;

class bankdeposits
{
    int principal;
    int years;
    float interestrate;
    float returnValue;

public:
    bankdeposits(){}   //default constructor

    bankdeposits(int p, int y, float r);
    bankdeposits(int p, int y, int r);
    void show();
};

bankdeposits ::bankdeposits(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestrate);
    }
}

bankdeposits ::bankdeposits(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestrate);
    }
}
void bankdeposits ::show()
{
    cout << "Principal amount was " << principal << ". Return value after " << years
         << " years is " << returnValue << endl;
}

int main()
{
    bankdeposits bd1, bd2;

    int p, y;
    int R;
    float r;

    cout<< "enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankdeposits(p,y,r);
    bd1.show();

    cout<< "enter the value of p, y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankdeposits(p,y,R);
    bd2.show();

    return 0;
}