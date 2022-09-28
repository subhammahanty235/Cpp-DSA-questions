// ques : Given an array a[] of size n . for every i from 0 to n-1 , output max(a[0] , a[1],...a[i]);
/* approach :
    1. Keep a variable mx which stores the maxium till ith element
    2. Iterate over the array and update

*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,-9,1,3,-4,5};
    int mx = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i =0;i<n;i++){
        mx = max(arr[i] , mx);
        cout<<mx<<endl;

    }
    // cout<<mx<<endl;

return 0;
}