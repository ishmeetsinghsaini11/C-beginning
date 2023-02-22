#include<iostream>

using namespace std;

int printarr(int arr[],int n)
{
  for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int sortzeroandone(int arr[],int n){
  int i=0;

   int j=n;
   
   while(i<j)
   {
      if(arr[i]==0){
         i++;
      }
      else if(arr[j]==1)
      {
         j--;
      }
      else if(arr[i]==1 && arr[j]==0)
      {
         swap(arr[i],arr[j]);
         i++;
         j--;
      }
   }
}

int main(){

  int arr[8]={1,0,0,0,1,1,0,1};

  sortzeroandone(arr,8);
  
  printarr(arr,8);
}