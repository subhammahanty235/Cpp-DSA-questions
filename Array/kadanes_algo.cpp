// or maxmim subarray sum
#include<iostream>

using namespace std;
int kadane(int arr[] ,int n){
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i =0;i<n;i++){
        currsum+=arr[i];
        if(currsum>maxsum){
            maxsum = currsum;
        }
        if(currsum<0){
            currsum = 0;
        }
    }
    return maxsum;
}
int main(){
    int arr[] = {1,2,3,-2,5};
    int n = 5;
    int ans = kadane(arr, n);
    cout<<ans<<endl;
return 0;
}