                        /* Constuctors */

#include<iostream>
using namespace std;

// Creating a Constructor
// Construction is a special member function with the same name as of the class. 
// It is used to initialize the objects of its class.
// It is automatically invoked whenever an objects is created.

class complex {
    int a, b;
    public:
    complex(void);      // Constructor declaration

    void printNumber(){
        cout<<"Your number is  "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex :: complex(void)  // ---> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
}

int main(){
    complex c;
    c.printNumber();
    return 0;
}

/*  Characteristics of Constuctor
1. It should be declared in the public section of class.
2. They are automatically invoked whenever object is created.
3. They  cannot return value and do not have return type.
4. It can have default arguments.
5. We cannot refer to their address.  */