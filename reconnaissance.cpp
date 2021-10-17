#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>


int main(){

    int n, arr[101];
    int max=1001, diff = 0;
    std::cin>>n;
    for (int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int index1 = 1, index2 = n;
    diff = abs(arr[0]-arr[n-1]);
    max = std::min(max, diff);
    for(int i=0; i<n; i++){
        diff = abs(arr[i]-arr[i+1]);
        if(diff<max){
            max = diff;
            index1 = i+1;
            index2 = i+2;
        }
    }
    std::cout<<index1<<" "<<index2<<std::endl;
}