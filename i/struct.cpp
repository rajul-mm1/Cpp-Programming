# include <iostream>
using namespace std;

struct employee{
    int id;
    char favChar;
    float salary;
};

typedef struct toys{
    int toyid;
    char name;
    float price;
}ty;

int main(){

     struct employee rajul;
     rajul.id = 56;
     rajul.favChar = 'r';
     rajul.salary = 5600000;

     cout << "the id is " << rajul.id<<"\n";
     cout << "the favChar is " << rajul.favChar<<"\n";
     cout << "the salary is " << rajul.salary<<"\n";

    //  use of typedef
    ty apple;
    apple.toyid = 2;
    apple.name = 'p';
    apple.price = 250.32;

     cout << "the id is " << apple.toyid<<"\n";
     cout << "the name is " << apple.name<<"\n";
     cout << "the price is " << apple.price<<"\n";


     return 0;

}