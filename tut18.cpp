                            // Recursions 
#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
return n*factorial(n-1);
}

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The value of factoril a is "<<factorial(a)<<endl;
    return 0;
}