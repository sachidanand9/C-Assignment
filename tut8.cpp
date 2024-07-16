#include<iostream>

#include<iomanip>

using namespace std;

int main(){
  /*  int a =45;
    cout<<"The value of a is :"<<a;
      
      a = 35;
      cout<<"The value of a is "<<a;*/


                   // Constant in C++ 


      const int a=8;
      cout<<"The value of a is :"<<a;
      
     // a = 35; // you will get a error because a is a constant 
      cout<<"The value of a is "<<a; 


      // Manipulators in C++

      int a = 3, b = 78, c = 2312;

      cout<<"The value of a without setw is:"<<a<<endl;
      cout<<"The value of a without setw is:"<<b<<endl;
      cout<<"The value of a without setw is:"<<c<<endl;




      cout<<"The value of a is:"<<setw(4)<<a<<endl;
      cout<<"The value of a is:"<<setw(4)<<b<<endl;
      cout<<"The value of a is:"<<setw(4)<<c<<endl;

                  // Operator Presidence

                  int a = 3, b= 4;
                  int c = (a*5)+b;     // saw operator praisedence rule first 

                  cout<<c;

                  int d = ((((a*5)+b)-45)+87); 

                  cout<<d;

      return 0;
}