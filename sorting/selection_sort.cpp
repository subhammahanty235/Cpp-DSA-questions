#include<iostream>
using namespace std;
void selectionsort(int arr[] , int n){
    
    for(int i =0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[min]> arr[j]){
                min = j;
            }
            
        }
        if(i!=min){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
       
    }
    
}
int main(){
    int arr[] = {3,2,5,4,7,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr , n);
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}