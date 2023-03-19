# include <iostream>
# include <cmath>
using namespace std;

class point{
    int x, y;
    friend void distance(point, point);

    public:
            point(int a, int b){
                x = a;
                y = b;
            }

            void displayfunc(){
                cout << "(" << x << ", " << y << ")" << endl;
            }
};

void distance(point p1, point p2){
        int x_diff = (p2.x - p1.x);
        int y_diff = (p2.y - p1.y);

        int result = sqrt(pow(x_diff,2) + pow(y_diff,2));

        cout << "The result is "<< result<< endl;
};

int main(){
    point p(4,5);
    point q(1,2);

    point a(74,85);
    point b(11,20);
    
    distance(p, q);
    distance(a, b);

    return 0;
}