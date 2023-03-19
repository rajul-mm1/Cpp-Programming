# include <iostream>
using namespace std;

union money{
    int rice;
    char car;
    float pounds;
};

int main(){

    union money m1;
   
    m1.car = 'k'; 

    m1.rice = 56;  //this will print the garbage value as in union only one variable is used at the time;

    cout << "the value of car money is " << m1.car<<"\n";

    enum meals {samosa, sandwich, juice};
    
    cout <<samosa<<"\n";
    cout <<sandwich<<"\n";
    cout <<juice<<"\n";

    // another way of writing enum is 
    meals m1 = samosa;  

    //m1 can also be equal to sandwich and juice it is not important to initialise it using m2 and m3.
    
    meals m2 = sandwich;
    meals m3 = juice;
    
    cout<<m1<<"\n";
    cout <<m2<<"\n";
    cout<<m3<<"\n";
    
    return 0;
}