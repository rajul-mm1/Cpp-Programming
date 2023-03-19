#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

public:
        int setdata(int v1, int v2){
            a = v1;
            b = v2;
        }

        int getsum(complex o1, complex o2){
              a = o1.a + o2.a;
              b = o1.b + o2.b;
        }

        void printsum(){
            cout << "Your complex no is "<<a << " + " << b << "i"<<endl;
        }
};

int main(){

    complex c1, c2, c3;

    c1.setdata(5,10);
    c1.printsum();

    c2.setdata(1,5);
    c2.printsum();

    c3.getsum(c1,c2);
    c3.printsum();

    return 0;
}