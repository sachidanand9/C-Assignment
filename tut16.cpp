                                     // Call by Value

   #include<iostream>
   using namespace std;
   int sum (int a, int b){
   int c = a+b;
   }

//this will not swap
   
   void swap(int a, int b){          /* temp a  b
                                        4    4  5
                                        4    5  5
                                        4    5  4 */
       int temp = a;
       a = b;
       b = temp;
   }


                              // Call by Reference using pointer


   void swapPointer(int* a, int* b){          /* temp a  b
                                                 4    4  5
                                                 4    5  5
                                                 4    5  4 */
       int temp = *a;
       *a = *b;
       *b = temp;
   }
      


                          // Call by Reference using Reference variable


   void swapReferenceVar(int &a, int &b){          /* temp a  b
                                                      4    4  5
                                                      4    5  5
                                                      4    5  4 */
       int temp = a;
       a = b;
       b = temp;
   }
   int main(){
       int x =4, y= 5;
    //    cout<<"the sum of 4 and 5 is "<<sum(4,5);
    cout<<"The value a is "<<x<<"and the value of b is"<<y<<endl;
  //  swap(a, b);  ------> This will not swap
//   swapPointer(&x, &y); //----> this will swap  by Pointer
     swapReferenceVar(x, y); // -----> this will swap by reference variable
    cout<<"The value a is "<<x<<"and the value of b is"<<y<<endl;
       return 0;
   }               
                    
                    /* No chnge in output bcause we cant retutn any value in swap function */