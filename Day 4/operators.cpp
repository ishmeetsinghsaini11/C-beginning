//OPERATORS

#include<iostream>
using namespace std;

int main(){
  //BITWISE OPERATORS
  
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

  // INCREMENT AND DECREMENT OPERATOR

  int i =10;
  cout<<(i++)<<endl; //POST INCREMENT
  //10
  cout<<(++i)<<endl; //PRE INCREMENT
  //12
  cout<<(i--)<<endl; //POST DECREMENT
  //12
  cout<<(--i)<<endl; //PRE DECREMENT
  //10

}