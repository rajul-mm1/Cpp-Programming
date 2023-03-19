#include<iostream>
using namespace std;

// vol of cylinder
int vol(double r, int h){
    return (3.14 * r * r * h);
}

// vol of sphere
int vol(int r){
    return(3.14 * r * r);
}

// vol of cuboid
int vol(int l, int b, int h){
    return (l * b * h);
}

int main(){
    cout << "the volume of cylinder is " << vol(2.1, 5)<<endl;
    cout << "the volume of sphere is " << vol(5)<<endl;
    cout << "the volume of cuboid is " << vol(2,3, 5)<<endl;

    return 0;
}