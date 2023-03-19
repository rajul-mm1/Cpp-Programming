#include<iostream>
using namespace std;

class y;         //forward declaration

class x{
    int data;
    public:
            int val1;
            void setdata(){
                cout<<"enter the value of data: ";
                cin>>val1;
                data = val1;
            }
    friend void add(x, y);
};

class y{
    int num;

    public:
            int val2;
            void setdata(){
                cout<<"enter the value of data: ";
                cin>>val2;
                num = val2;
            }
    friend void add(x, y);
};

void add(x o1, y o2){
        cout<<"The summing of two nos is "<< o1.data + o2.num<<endl;
}

int main(){
    x a;
    a.setdata();

    y b;
    b.setdata();

    add(a, b);

    return 0; 
}