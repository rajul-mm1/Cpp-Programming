# include <iostream>
using namespace std;

int main(){
    int age;

    cout << "enter ur age:" << "\n";
    cin >> age;

    if(age < 18){
        cout << "u cannot come to the party";
    } 
    else if (age == 18){
        cout << "u r a kid";
    }
    else{
        cout << "u can come to the party";
    }

    return 0;
}