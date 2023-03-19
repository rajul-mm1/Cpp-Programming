# include <iostream>
using namespace std;

// call by value
int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// call by address
int swapptr(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference variable
void  swaprefvar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
    
// return by reference
int & swaprefvar4(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a; 
}
int main(){
    int x = 12 , y = 5;
    
    cout << "the value of x and y before swapping is " << x << "\t" <<y<<"\n";
    swap(x,y); //value does not change bcoz the copied value is passed to the function
    cout << "the value of x and y after swapping is " << x << "\t" <<y<<"\n";

    swapptr(&x,&y);  //the value changes as the address is passed to it
    cout << "the value of x and y after pointer swapping is " << x << "\t" <<y<<"\n";

    swaprefvar(x,y);
    cout << "the value of x and y after reference variable swapping is " << x << "\t" <<y<<"\n";

    swaprefvar4(x,y) = 5662;
    cout << "the value of x and y after return reference variable swapping is " << x << "\t" <<y<<"\n";



    return 0;

}