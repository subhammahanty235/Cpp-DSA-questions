/*
approach
    1. loop over the array and find the answer

    Maintain the following variables :
        1. Previous common difference 
        2. Current Arithmatic Subarray length
        3. Max arithmatic subarray length

*/
/*
2 cases 
 1. Previous common diffence is equal to current common difference (array[i] - array[i-1])
  --> 1. Current answer increases by 1
      2. ans = max between answer and current
 2. Previous common diffence is not equal to current common difference (array[i] - array[i-1])
  --> 1. Update current answer to 2
*/

#include<iostream>
using namespace std;
int main(){
    

      int arr[] = {10 ,7, 4, 6, 8 ,10 ,11};
      int n = sizeof(arr)/sizeof(arr[0]);
      int pd = arr[1]-arr[0];
      int ans =2;
      int curr =2;
      int j =2;
      while(j<n){
        if(pd == arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j]-arr[j-1];
            curr =2;
        }
        ans = max(curr , ans);
        j++;
      }
      cout<<ans;

return 0;
}