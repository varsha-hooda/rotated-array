#include<iostream>
using namespace std;
int search(int arr[], int n , int target)
{
    int start = 0; 
    int end = n-1;
    while(start <= end){
        int mid = start +(end -start)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<=arr[mid]){
   if(arr[start] <=target && target<arr[mid]){
end = mid-1;
   }
   else{
    start = mid +1;
   }
        }
else{
    if(arr[mid] <target && target <=arr[end]){
        start=mid+1;
    }
   else{
  end= mid +1;
   }
    
}
        }
        return -1;
    }
int main() {
     int arr[] = {4,5,6,7,0,1,2};
        int n = 7;
        int target = 0;
        int index = search(arr, n, target);
        cout << "index = " << index;
        return 0;
}