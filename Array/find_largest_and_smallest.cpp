#include<iostream>
using namespace std;
int main(){
    int num[10] = {2,3,9,4,5,0,6,8,7,1};
    int small = INT_MAX;
    int large = INT_MIN;
    for (int i =0;i<10;i++){
        if(num[i]<small){
            small = num[i];
        }
        if(num[i]>large){
            large = num[i];
        }
    }
    cout<<"Large: "<<large<<endl;
    cout<<"Small: "<<small<<endl;
return 0;
}