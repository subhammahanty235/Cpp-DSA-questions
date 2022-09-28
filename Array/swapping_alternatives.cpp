#include<iostream>
using namespace std;

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i =0;i<5;i+=2){
//         if(i+1<5){
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = temp;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i =0;i<5-1;i+=2){               //5-1 or arr.length()-1 is used in this approach to avaoid the if statement 
        
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
return 0;
}