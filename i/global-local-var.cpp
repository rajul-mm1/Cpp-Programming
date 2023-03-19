# include <iostream>
using namespace std;

int var = 39;

void sum(){
  cout << "second " << var << endl;
 }

int main(){
        int var = 90;
  cout << "first " << var << endl;

  bool is_true = false;
  var = 89;
  sum();
  cout << "third " << var << endl << is_true;
   
    return 0;
}