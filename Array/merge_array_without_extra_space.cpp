// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[] , int arr2[] , int n , int m){
    vector<int>v(arr1 , arr1+n);
    for(int i =0;i<m;i++){
        v.push_back(arr2[i]);
    }
    int z = n+m;
    int j =0;
    sort(v.begin() , v.end());
    for(int i =0;i<z;i++){
        if(i<n){
            arr1[i] = v[i];
        }
        else{
            arr2[j] = v[i]; 
            j++;
        }
    }

    
}
int main(){
    int arr1[] = {1,3,5,7};
    int arr2[] = {0,2,6,8,9};
    merge(arr1 , arr2 , 4,5);
    for(int i =0;i<4;i++){
        cout<<arr1[i]<<"-> ";
    }
    for(int i =0;i<5;i++){
        cout<<arr2[i]<<"-> ";
    }

return 0;
}