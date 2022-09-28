#include<iostream>
using namespace std;
int find(int arr[] , int n){
    int son = n*(n+1)/2;
    int soe = 0;
    for (int i = 0; i < n-1; i++)
    {
     soe+=arr[i];
    }

    return son-soe;
    
}
int main(){
    int arr[] = {1,2,3,5};
    int n = 5;
    int ans = find(arr, n);
    cout<<ans<<endl;
return 0;
}