                            /* Friends Functions in C++ */
#include<iostream>
using namespace std;


    class Complex{
        int a, b;
        public:
        void setNumber(int n1 , int n2){
               a = n1;
               b = n2;
        }
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber(){
            cout<<" Your number is"<<a<<" + "<<b<<"i"<<endl;
        }
    };

    Complex sumComplex(Complex o1 , Complex o2){
        Complex o3;
        o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
        return o3;
    }

    int main(){
        Complex c1, c2 , sum;
        c1.setNumber(1,4);
        c2.setNumber(5,8);
        c1.printNumber();
        c2.printNumber();

        sum = sumComplex(c1, c2);
        sum.printNumber();


        
    return 0;
}

/* Properties of Friend Functions.
1. Not in the scope of class.
2. Since it is not in the scope of the class , it cannot be called from the object of the class.c1.sumcomplex()== invalid.
3. Can be invoked without the help of any object.
4. Usally contans the objects as arguments.
5. Can be decleared inside public and private sections of the class.
6.It cannot acess the members directly by thier names and need objects_name.member_name to access any member.
*/