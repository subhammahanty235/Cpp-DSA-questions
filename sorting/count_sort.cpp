#include<iostream>
using namespace std;

void countSort(int arr[] , int n){
    
    int mx = arr[0];
    for(int i =0;i<n;i++){
        mx = max(mx , arr[i]);

    }
    cout<<mx<<endl;
    
    int count[mx] = {0};
    for(int i =0;i<n;i++){
        count[arr[i]]++;
    }
    
    
    
    int i =0;
    int j =0;
    while(i<=mx){
        if(count[i]!=0){
            arr[j] = i;
            count[i]--;
            j++;
        }
        else{
            i++;
        }
    }
    
}

int main(){
int arr[] = {3,1,9,7,1,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    countSort(arr , n);
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}