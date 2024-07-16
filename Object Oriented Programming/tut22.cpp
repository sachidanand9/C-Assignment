 /*       OOPs - Classes and Objects
    
    C++ ---> initially called C with classes by stroustroup
    classes ---> extension of structuers in C
    structures haad limitation 
             - members are public
             - No methods
    classes --> structures + more
    classes --> can have method and properties 
    classes --> can make members as private  or public
    structures in C++ are typedefed
    
    you can declare object along with the class 
                eg :- declaration like these :
                
                classes Employee{
                    // class declaration
                }  harry , prince;
                harry.salary = 8 makes no sence if salary is private        */


                // Nestring of members functions 

#include<iostream>
#include<string>
using namespace std;
class binary {
  private:  
    string s;
   public:
   void read(void);
   void chk_bin(void);
   void one_compliment(void);
   void display(void);
};
void binary :: read(void){
    cout<<" Enter a binary number"<<endl;
    cin>>s;
}
void binary :: chk_bin(void)
{
for (int i = 0; i < s.length(); i++){
    if(s.at(i) != '0' && s.at(i) != '1' )
    {
        cout<<"Incorrect binary formate"<<endl;
        exit(0);
      }
  
   } 

}
  void binary :: one_compliment(void){
for(int i = 0; i < s.length(); i++){
    if (s.at(i) =='0'){
        s.at(i) ='1';
    }
    else {
        s.at(i)='0';
    }
}
  }

   void binary :: display(void){
       cout<<"Displaying your binary numbers"<<endl;
for(int i = 0; i < s.length(); i++){
  cout<<s.at(i); 
    }
}
  
int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.one_compliment();
    b.display();
    
    return 0;  
}

   