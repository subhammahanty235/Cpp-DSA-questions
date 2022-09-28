#include<iostream>
using namespace std;
void insertionsort(int arr[] , int n){
    int key ;
    for(int i =1;i<n;i++){
        key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
int main(){
    int arr[] = {3,2,5,4,7,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr , n);
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
} 