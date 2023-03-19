#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }

    void setprice();
    void display();
};

void shop :: setprice()
{
    cout << "Enter the id of the item no. " << counter + 1 << endl;
    cin >> itemid[counter];

    cout << "Enter the price of the item " << endl;
    cin >> itemprice[counter];

    counter++;
}

void shop :: display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.display();

    return 0;
}