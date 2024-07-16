/* Friend Class and Member Friend Function */

#include <iostream>
using namespace std;

// Forward declaration

class Complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};
class Complex
{
    int a, b;

    // individually declaring fumction as friend
    friend int calculator ::sumRealComplex(Complex, Complex);
    friend int calculator ::sumCompComplex(Complex, Complex);

    // Aliter : Declearing the entire calculator class as friend
    // friend class calculator ;   ----> this is use when numbers of function are their

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;a;
        
    }
    void printNumber()
    {
        cout << "Your number is" << a << "+" << b << "i" << endl;
    }
};
int calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 6);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The Sum of real part of o1, o2 is" << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The Sum of Complex part of o1, o2 is" << resc << endl;
    return 0;
}