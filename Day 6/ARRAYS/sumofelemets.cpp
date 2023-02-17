//TO PRINT SUM OF THE ELEMENTS OF THE ARRAY

#include<iostream>
using namespace std;

void update(int array[], int size){
  for (int i = 0 ; i<size ; i++){
    cin>>array[i];
  }
}

void sum(int array[],int size){
  int sum=0;
  
  for(int i = 0; i<size ; i++){
    sum = sum + array[i];
  }
  cout<<sum<<endl;
}
int main(){
  int first[10];

  update(first,10);

  sum(first,10);
}