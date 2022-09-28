#include<iostream>
using namespace std;
void merge(int* arr , int s , int e){
    int *arr2 = new int[e];
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    while(i<= mid && j<= e){
        if(arr[i] < arr[j]){
            arr2[k++] = arr[i++];
            // i++;
        }
        else{
            arr2[k++] = arr[j++];
            // j++;
        }
        // k++;
    }
    if(i>mid){
        while(j<= e){
            arr2[k++] = arr[j++];
            // k++;
            // j++;
        }

    }
    else{
        while(i<= mid){
            arr2[k++] = arr[i++];
            // k++;
            // i++;
        }
    }

    for(k = s;k<=e;k++){
        arr[k] = arr2[k];
    }

}
void mergeSort(int *arr , int s , int e){
    if(s>=e){
        return;
    }
    // left part sort
    
    int mid = (s+e)/2;
    mergeSort(arr , s , mid);
    mergeSort(arr , mid+1 ,e);

    merge(arr ,s ,e);
}
int main(){
    int arr[] = {2,5,1,1,6,9};
    // int n = 6;
    mergeSort(arr , 0 , n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}
