#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a = 0; 
    }
    Number(int num){
        a = num;
    }
    // When no copy constructor is found compiler supplies its own copy constuctor
    Number(Number &obj){
        cout<<"Copy constuctor called!!!"<<endl;
        a = obj.a;
    }
    void display(){
        cout<<"The number for this object is"<<a<<endl;
    }
};
int main(){
    Number x, y ,z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // copy cnstructor invoked
    z1.display();

    z2 = z; // copy constructor not invoked

    Number z3 = x; // copy constuctor invoked
    z3.display();

    // z1 should exactly resemble z or x or y
    
    return 0;
}