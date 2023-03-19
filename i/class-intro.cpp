#include<iostream>
using namespace std;

class employee{
    private:     //can be accessed only by class objects
            int a, b, c;
    
    public:     //can be accessed directly by any objects
            int d, e;

    //void setdata(int g, int h, int i, int j, int k); --> can be done this way
    void setdata(int g, int h, int i);
    void getdata(){
        cout << "The value of a is "<<a<<endl;
        cout << "The value of b is "<<b<<endl;
        cout << "The value of c is "<<c<<endl;
        cout << "The value of d is "<<d<<endl;
        cout << "The value of e is "<<e<<endl;
    }
};
// void employee :: setdata(int g, int h, int i, int j, int k){  --> can be done this way
void employee :: setdata(int g, int h, int i){
    a = g;
    b = h;
    c = i;
    // d = j;
    // e = k;
}

int main(){
    employee rajul;
    // rajul.a = 678; //this will produce an error as its a private variable.

    // rajul.setdata(5,6,4,8,9); --> can be done this way. when we will do this then in getdata the values written further will be given more importance than the ones specified within the function

    rajul.setdata(5,6,4);  //only specifying this will produce garbage value for d and e

    rajul.d = 89;

    rajul.e = 140;

    rajul.getdata();

    return 0;
}