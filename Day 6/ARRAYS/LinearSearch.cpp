// LINEAR SEARCH 

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

  int key;
  cout<<"enter key"<<endl;
  cin>>key;

  int array[10]={1,5,44,666,77,5,44,6,69};

  bool found = search(array,10,key);

  if(found){
    cout<<"key is present"<<endl;
  }
  else{
    cout<<"key is absent"<<endl;
  }

}