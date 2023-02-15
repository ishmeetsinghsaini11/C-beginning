//POWER OF TWO

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter value of n"<<endl;
  cin>>n;
  for(int i = 0; i<=30 ;i++){
            int ans= pow(2,i);
            if (ans==n){
                return true;
            }
        }
        return false;
}