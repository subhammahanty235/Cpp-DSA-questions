#include<iostream>
using namespace std;
void bubblesort(int arr[] , int n){
    
    for(int i = 0;i<n-1;i++){
        int counter =0;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j]^ arr[j+1];
                arr[j+1] = arr[j]^ arr[j+1];
                arr[j] = arr[j]^ arr[j+1];
                counter++;
                
            }
            
        }
        if(counter == 0){
            break;
        }
    }
    
}
int main(){
     int arr[] = {3,2,5,4,7,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr , n);
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}