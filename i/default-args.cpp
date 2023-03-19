
#include<iostream>
using namespace std;

int moneyrec(float currentmoney,float factor = 4.1){
    return currentmoney * factor;
}

int main(){
    float money = 10000;
    
    cout << "the amount of " << money << " that is returned back with interest is " << moneyrec(money) << endl;

    cout << "the amount of " << money << " for vip that is returned back with interest is " << moneyrec(money,1.8) << endl;

    return 0;
}