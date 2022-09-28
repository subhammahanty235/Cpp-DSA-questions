// ques : sum of all subarray
/* 
    array = {1 ,2 ,2};
    subarrays : {1} , {1,2} ,{1,2,2} ,{2}, {2,2}, {2};
    sum = 1 + 3 + 5 + 2 + 4 + 2 = 17
*/

/*
    approach : 
        1. Iterate over the subarrays using nested loop
        2.
*/

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1 ,2 , 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for (int i =0;i<n;i++){
        int curr = 0;
        // cout<<"in the i loop"<<endl;
        for(int j =i;j<n;j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }
    }
return 0;
}