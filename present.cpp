#include<iostream>
#include<bits/stdc++.h>


int main(){
    int n, b;
    std::cin>>n;
    int arr[n+1], co_arr[n+1];
    for(int i=1; i<n+1; i++){
        std::cin>>arr[i];
    }
    for(int i=1; i<n+1; i++){
        b = arr[i];
        co_arr[b] = i;
    }
    for(int i=1; i<n+1;i++){
        std::cout<<co_arr[i]<<" ";
    }
}