#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};

class derived : protected base
{
};

int main()
{
    base b;
    derived d;
 
    // cout << b.a; //cannot be inherited even if it is protected
    // cout << d.a; //cannot be inherited by derived class even if it is protected

    return 0;
}

/*Protected means that the variable will remain private but can be inherited by derived class

Members                    Public Derivation         	Private Derivation    	   Protected Derivation
Private members           	Not Inherited                Not Inherited               Not Inherited              
Protected members             Protected                   Private                 	   Protected                    
Public members           	  Public	                  Private                 	   Protected       

*/