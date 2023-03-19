# include <iostream>
#include <iomanip>
using namespace std;

int main(){
   const int a = 45;
    // a = 63;
    cout << "the value of a is " << a << "\n";

    // manipulators 

    cout << "this is the setw :" << setw(12) << a;

    return 0;
}
