// TO PRINT REVERSE OF THE ELEMENTS OF THE ARRAY

#include<iostream>
using namespace std;

void reverse(int array[],int size){
  
  for(int i = size - 1 ; i>=0; i--){

    cout<<array[i]<<" ";

    }

}

int main(){

  int array[4]={1,5,44,666};

  reverse(array,4);
  return 1;
  
}