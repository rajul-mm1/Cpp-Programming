# include <iostream>
using namespace std;

int main(){

    int marks[] = {45,63,58,99};
    int* p = marks;

    cout << "the value at 0 is "<< *p<<"\n";
    cout << "the value at 1 is "<< *(p+1)<<"\n";
    cout << "the value at 2 is "<< *(p+2)<<"\n";
    cout << "the value at 3 is "<< *(p+3)<<"\n";

    // accessing using pointers
    cout << "marks "<< *p++<<"\n";
    cout << "marks "<< *p<<"\n";
    cout << "marks "<< *p++<<"\n";
    cout << "marks "<< *p<<"\n";
    cout << "marks "<< *p<<"\n";
    cout << "marks "<< *++p<<"\n";

    return 0;
}