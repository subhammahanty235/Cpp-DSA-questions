#include<iostream>
using namespace std;

int partision(int arr[] , int s , int e){
    
    int pivot = arr[s];
    int i = s;
    int j = e;
    while(i<j){
        while(i<=e-1 && arr[i]<=pivot)i++;
        while(j>=s && arr[j]>pivot)j--;
        if(i<j){
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[j] , arr[s]);
    
    return j;


}
void quickSort(int arr[] , int s, int e){
    
    if(s>=e){
        return;
    }
    int pivot = partision(arr ,s ,e);
    quickSort(arr , s, pivot-1);
    quickSort(arr , pivot+1 , e);
    
}
int main(){
int arr[] = {3,2,2,5,2,4,7,10,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr , 0 , n-1);
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}