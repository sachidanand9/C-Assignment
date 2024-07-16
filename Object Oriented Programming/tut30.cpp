                     /* Parameterized and Default Constuction */
/* #include<iostream>
using namespace std;

class complex {
    int a, b;
    public:
        complex();     // constuction declaration
        void printNumber(){
            cout<<" Your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex(){  // ------> This is a default constructor as it takes no parameters
    a = 0; 
    b =0;
}
int main(){
    complex a;
    a.printNumber(); 
    
    return 0;
} */


                                // Parameter Construction 

  #include<iostream>
using namespace std;

class complex {
    int a, b;
    public:
        complex(int, int);     // constuction declaration
        void printNumber(){
            cout<<" Your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex(int x, int y){  // ------> This is a Parameterized constructor as it takes two parameters
    a = x; 
    b = y;
}
int main(){
    // Implicit call
    complex a( 4, 6);
    a.printNumber(); 

    // Explicit call
    complex b( 5, 7);
    b.printNumber();
    
    return 0;
}                              