# include <iostream>
using namespace std;

int main(){

    int num1, num2;

    cout << "enter the value of num1:\n";     
    cin >> num1;                                // '<<' called the insertion operator

    cout << "enter the value of num2: \n";
    cin >> num2;                                // '>>' called the extraction operator

    cout << "the sum is " << num1 + num2;
    
    return 0;
}