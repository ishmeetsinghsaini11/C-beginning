#include<iostream>

using namespace std;

bool search(int array[],int size, int key){
  for(int i = 0; i<size ; i++){

    if(array[i]==key){
      return 1;
    }
    
  }
  return 0;
}


int main(){

  int arr[7] = {3,7,2,2,7,3,4};

  for(int i = 0; i<7 ; i++){
    int num = arr[i];
    bool found = search(arr,5,num);
    
    if (!found){

      cout<<num<<endl;
      
    }
      
    }
}

 
