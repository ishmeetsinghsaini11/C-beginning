//TO FIND THAT NUMBER IS PRIME OR NOT

#include<iostream>
using namespace std;

int isPrime(int n){

  for (int i=2; i<n ; i++){
    
    if ( n%i==0){
      return 0;
    }
    
  }
  return 1;
}

int main(){
  int num;
  cin>>num;
  if (isPrime(num)){
    cout<<"is prime"<<endl;
  }
  else{
    cout<<"is not prime"<<endl;
  }
}