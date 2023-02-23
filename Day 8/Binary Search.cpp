#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    /*
    for optimising the calculation of mid so that it do not go out of scope of size of integer we can write the formula 
    mid = (start=end)/2    as-->    mid = start+(end-start)/2       
    */
    int mid = start + (end-start)/2;
    
    while(start<=end)
    {
        //check element with key
        if(arr[mid]==key){
            return mid;
        }
        // go to right wala part
        else if(arr[mid]<key){
            start = mid + 1;
        }
        //go to left wala part
        else{
            end = mid - 1;
        }
        //update mid
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {1,3,5,7,9};
    
    int evenIndex = BinarySearch(even, 6, 12);
    
    cout<<evenIndex<<endl;
    
    int oddIndex = BinarySearch(odd, 5, 1);

    cout<<oddIndex<<endl;
    
    return 0;
}












