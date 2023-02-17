// INPUT AND OUTPUT THE ELEMETS OF THE ARRAY


#include<iostream>
using namespace std;

void update(int array[], int size){
  for (int i = 0 ; i<size ; i++){
    cin>>array[i];
  }
}

void printarray(int array[],int size){
  for(int i = 0; i<size ; i++){
    cout<<array[i]<<" ";
  }
}
int main(){
  int first[10];

  update(first,10);

  printarray(first,10);
}