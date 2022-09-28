#include<iostream>
using namespace std;
int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    
    for(int i =0;i<10/2;i++){
        int temp = arr[i];
        arr[i] = arr[10-i-1];
        arr[10-i-1] = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
    
return 0;
}