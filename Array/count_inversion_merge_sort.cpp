#include<iostream>
using namespace std;
long long int merge(long long arr , int start , int end){
    long long invs = 0;
    long long *arr2 = new long long[end];
    int mid = (start+end)/2;
    int i = start;
    int j = mid+1;
    
    int k = start;

    while(i<=mid && j<= end){
        if(arr[i] <= arr[j]){
            arr2[k++] = arr[i++];
        }
        else{
            arr2[k++] = arr[j++];
            invs+= mid-i;
        }

    }
    if(i>mid){
        while(j<=end){
            arr2[k++] = arr[j++];

        }
    }
    else{
        while(i<=mid){
            arr2[k++] = arr[i++];
        }
    }

    for(k = start ;k<=end;k++){
        arr[k] = arr2[k];
    }
    return invs;
}
long long mergeSort(long long arr[] , int start , int end){
    long long invs = 0;
    if(start<= end){
        int mid = (start+end)/2;
        invs+= mergeSort(arr , start , mid);
        invs+= mergeSort(arr , mid+1 , end);
        invs+= merge(arr , start , end);
    }
    return invs;
}

long long int inversion(long long arr[], long long n){
    long long int ans = mergeSort(arr , 0 , n-1);
    return ans;
}
int main(){
   long long arr[] = {2, 4, 1, 3, 5};
   long long n = 5;
   cout<<inversion(arr , n);
    return 0;
}