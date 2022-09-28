// ques : Given two arrays X and Y of positive integers, find the number of pairs such that xy > yx (raised to power of) where x is an element from X and y is an element from Y.
// link: https://practice.geeksforgeeks.org/problems/number-of-pairs-1587115620/1

#include<bits/stdc++.h>
using namespace std;
// brute force O(N*M) solution
int findPairs(int X[], int Y[], int M, int N){
    int count = 0;
    for(int i =0;i<M;i++){
        for(int j =0;j<N;j++){
            if(pow(X[i] , Y[j]) > pow(Y[j] , X[i]) ){

                cout<<X[i]<<"^"<<Y[j]<<endl;       //for debugging
                cout<<Y[j]<<"^"<<X[i]<<endl;       //for debugging
                cout<<pow(X[i] , Y[j])<< ">" <<pow(Y[j] , X[i])<<endl;       //for debugging

                count++;
            }
        }
    }
    return count;
}

int main(){
    int X[] = {2,3,4,5};
    int Y[] = {1,2,3};
    int M = 4;
    int N = 3;
    int ans = findPairs(X ,Y , M, N);
    cout<<ans;
return 0;
}