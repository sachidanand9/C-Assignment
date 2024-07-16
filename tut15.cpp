                                /* Functions  */
#include<iostream>
using namespace std;

/*                     Function Prototype
type function-name (arguments);
int sum(int a, int b); --------> Acceptable
int sum(int a, b); --------> Not Acceptable
*/
int sum(int ,int); //-------> Acceptable

int main(){
    int num1, num2;
    cout<<"Enter the firts value"<<endl;
    cin>>num1;
    cout<<"Enter the second value"<<endl;
    cin>>num2;
    // num1 , num2 are acutal parameters
    cout<<"the sum is"<<sum(num1, num2);
        return 0;
}
int sum( int a, int b){
    // Formal parameters -----> a and b are taking value from num1 and num2.
    int c = a+b;
    return c;
}