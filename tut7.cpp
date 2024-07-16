#include<iostream>

using namespace std;

int main(){


    //*********** Flot , Double , Lond double Literals ****************


  float d=34.4f;     // ---> we use f when pass value pass throuh float

  long double e=43.4l;  // ----> we use l when value pass throuh long double

    cout<<"The value of d is"<<d<<endl<<"the value of e is"<<e; 



    //*********** Refernce VAriable *************


    float  x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;




      // ************** Typecasting **************



      int a = 45;
       float b = 65.90;

       cout<<"The value of a is "<<float(a)<<endl;

       cout<<"the value os b is "<<int(b)<<endl;

       cout<<"The expression is"<<a+b<<endl; 
       cout<<"The expression is"<<a+ int(b)<<endl;
       cout<<"The expression is"<<a+(int)b<<endl;
       
}