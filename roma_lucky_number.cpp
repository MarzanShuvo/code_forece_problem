#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>

int main(){
    int n, k;
    std::cin>>n>>k;
    int count=0;
    int output = 0;
    std::vector<int> v(n);
    for(int i=0; i<n; i++){
       std::cin>>v[i];
    }
    for(int i=0; i<n;i++){
        int a= v[i], x=0, count=0;
        while(a>0){
            x = a%10;
            a = int(a/10);
            if(x==4 || x==7){
                count++;
            }
        }
        if(count<=k){
            output++;
        }     
    }
    std::cout<<output<<std::endl;
}