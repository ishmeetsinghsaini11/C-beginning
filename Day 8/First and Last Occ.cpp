#include<iostream>
using namespace std;

int firstOcc(int arr[], int size,int  key)
{
    int s=0,e=size-1;
    int mid= s + (e-s)/2;
    int ans= -1;
    
    while(s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else if(arr[mid<key]){
            s = mid+1;
        }
        mid= s+ (e-s)/2;
        
    }
    return ans;
}

int endOcc(int arr[],int size, int key){
    int s=0,e=size-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s = mid+1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
    
}

int main(){
    
    int arr[5]={1,2,3,3,5};
    
    cout<<"First Occ 3 is at index "<<firstOcc(arr,5,3);
    
    cout<<endl;
    
    cout<<"End Occ of 3 is at index "<<endOcc(arr,5,3)<<endl;
    
    
    
    
}