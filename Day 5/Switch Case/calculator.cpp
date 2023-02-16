//CALCULATOR USING SWITCH CASE


#include<iostream>
using namespace std;

int main(){
  int a,b;
  char op;
  cout<<"enter value for a:"<<endl;
  cin>>a;
  cout<<"enter value for b:"<<endl;
  cin>>b;
  cout<<"enter operation"<<endl;
  cin>>op;

  switch(op){
    case '+': cout<<(a+b)<<endl;
              break;
    case '-': cout<<(a-b)<<endl;
              break;
    case '*': cout<<(a*b)<<endl;
              break;
    case '%' : cout<<(a%b)<<endl;
              break;
    case '/' : cout<<(a/b)<<endl;
              break;
    default: cout<<"invalid case"<<endl;
  }
}