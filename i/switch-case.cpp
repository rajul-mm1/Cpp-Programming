# include <iostream>
using namespace std;

int main(){
    int age;

    cout << "enter ur age:" << "\n";
    cin >> age;

    switch(age){
        case 18: cout << " u r 18" << endl;
        break;

        case 25: cout << " u r 25"<<endl;
        break;

        default: cout << "nobody can come"<<endl;
        break;
    }
    cout << "we r happy";
    return 0;
}