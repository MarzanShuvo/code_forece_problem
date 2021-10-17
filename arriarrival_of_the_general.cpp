#include<iostream>
#include<bits/stdc++.h>

int main(){
    int n, max=0, min=101, max_index, min_index, result;
    std::cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        std::cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
            max_index = i;
        }
        if(arr[i]<=min){
            min = arr[i];
            min_index = i;
        }
    }
    if(max_index>min_index){
        result = (max_index-1)+(n-min_index-1);
    }
    else{
        result = max_index-1+n-min_index;
    }

    std::cout<<result<<std::endl;

}