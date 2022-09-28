// Ques : Given an array of integers. Find the Inversion Count in the array. 
// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

// link : https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

#include<iostream>
using namespace std;

int countInversion(int arr[] , int n){
    int count = 0;
    for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j] && i < j){
                count++;
                cout<<"Incremented"<<endl;
            }
        }
    }

    return count;
}
int main(){
    int arr[] = {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = countInversion(arr , n);
    cout<<ans<<endl;
return 0;
}