// There are two type of header file 
#include<iostream>
// 1. System header file: It come with compailer
/* 2. user defined header filer : it is written by the user 
   eg. #include"these.h"  ------> this will produce an error if this.h is mot present in the current directory  */

using namespace std;

int main(){
     int a=4 , b=5;
    cout<<"Opertor in c++:"<<endl; // endl -----> new line operator
    cout<<"following are the types of operators in c++"<<endl;

    // Arithmetic operators
   cout<<"THe valu of a+b is "<<a+b;
   cout<<"\nTHe valu of a-b is "<<a-b;
   cout<<"\nTHe valu of a/b is "<<a/b;
   cout<<"\nTHe valu of a+b is "<<a+b;
cout<<"\nTHe valu of a%b is "<<a%b;
cout<<"\nTHe valu of a++ is "<<a++;
cout<<"\nTHe valu of a-- is "<<a--;
cout<<"\nTHe valu of ++a is "<<++a;
cout<<"\nTHe valu of --a is "<<--a;

  /* Assigment operators ----> used to assign value of variable 


   int a = 3 , b = 4;
   char d = 'c'


      Comaprison operators */
cout<<endl;
      cout<<"The Value of a==b is "<<(a==b)<<endl;
      cout<<"The Value of a<=b is "<<(a<=b)<<endl;
      cout<<"The Value of a>=b is "<<(a>=b)<<endl;
      cout<<"The Value of a=!b is "<<(a!=b)<<endl;
      cout<<"The Value of a>b is "<<(a>b)<<endl;
      cout<<"The Value of a<b is "<<(a<b)<<endl;

 cout<<endl;     



    return 0;
}

