//BITWISE OPERATORS

#include<iostream>
using namespace std;

int main(){

  int a = 2;
  int b = 4;
  int c = a&b;             // AND
  cout<< "a&b "<<c<< endl;
  int d = a|b;             // OR
  cout<<"a|b "<< d<< endl;
  int e = ~a;              // NOT
  cout<<"~a "<<e<< endl;
  int f = a^b;             // XOR
  cout<< "a^b "<<f<< endl;

  // LEFT SHIFT AND RIGHT SHIFT OPERATOR
  
  cout<<(5<<2)<<endl; //LEDT SHIFT
  cout<<(5>>2)<<endl; //RIGHT SHIFT

}