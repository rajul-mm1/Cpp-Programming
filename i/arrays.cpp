# include <iostream>
using namespace std;

int main(){

    int marks[] = {45,63,58,99};

    cout << "first way of array printing"<<"\n";
    cout << "marks -->" << marks[0]<<"\n";
    cout << "marks -->" << marks[1]<<"\n";
    
// we can change the array values as well but the value should be changed before printing
     marks[2] = 33;
    cout << "marks -->" << marks[2]<<"\n";
    cout << "marks -->" << marks[3]<<"\n";
    

    cout<< "second way of array printing"<<endl;
    marks[0] = 96;
    marks[1] = 56;
    marks[2] = 66;
    marks[3] = 16;
    cout << "marks are " <<marks[0] <<endl;
    cout << "marks are " <<marks[1] <<endl;
    cout << "marks are " <<marks[2] <<endl;
    cout << "marks are " <<marks[3] <<endl;



    return 0;

}