#include<iostream>
using namespace std;
// int binarysearch(int arr[] , int low , int high , int key){
//     while(low<=high){
//         int mid = (low+high)/2;

//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid] > key){
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//     }
//     return -1;
// }

int binarysearchrec(int arr[] , int item , int low ,int high){
    if(high <= low){
        return (item> arr[low]) ? (low+1) : low;
    }
    int mid = (low+high)/2;
    if(item == arr[mid]){
        return mid+1;
    }
    if(item > arr[mid]){
        return binarysearchrec(arr, item , mid+1 , high);
    }
    return binarysearchrec(arr , item , low , mid-1);

}
void insertionsort(int arr[] , int n){
    for(int i =1;i<n;++i){
        int j = i-1;
        int key = arr[i];

        int location = binarysearchrec(arr , key , 0, j);
        cout<<location<<endl;
        while(j>=location){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[location] = key;
    }
}
int main(){
    int arr[] = {3,2,5,4,7,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int location = binarysearch(arr , 0 , n , 2);
    // cout<<location<<endl;
    insertionsort(arr , n);

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}