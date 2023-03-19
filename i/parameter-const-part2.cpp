#include <iostream>
using namespace std;

class points
{
    int x, y;
    friend points add(int , int);

public:
    points(int a, int b)
    {
        x = a;
        y = b;
    }

    void disp(){
       cout << "The coordinates are (" << x << ", " << y << ")" << endl;
    }
};

points add(points x1, points y1){
       
}

int main()
{
    points p1(4, 5);
    p1.disp(); 

    points p2(8, 6);
    p2.disp();

    return 0;
}