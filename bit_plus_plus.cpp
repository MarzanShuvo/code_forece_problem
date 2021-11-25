#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>

int main(){
    int n, sum=0;
    std::cin>>n;
    std::vector<std::string> operation(n);
    for(int i=0; i<n; i++){
        std::cin>>operation[i];
    }
    for(int i=0; i<n; i++){
        if(operation[i][1]=='+'){
            sum++;
        }
        else{
            sum--;
        }
    }
    std::cout<<sum<<std::endl;
    
}