// TO FIND nCr USING FUNCTIONS 

#include<iostream>
using namespace std;

int factorial(int n){
  int fact = 1;
  
  for (int i = 1; i<=n ; i++){
    fact = fact*i;
  }
  
  return fact;
}

int nCr(int n, int r){
  int num = factorial(n);

  int denom = factorial(r) * factorial(n-r);

  int ans = num/denom;

  return ans;
}

int main(){
  int n,r;
  cout<<"enter values of n and r"<<endl;
  cin>>n>>r;
  int answer = nCr(n,r);
  cout<<answer<<endl;
  
}
