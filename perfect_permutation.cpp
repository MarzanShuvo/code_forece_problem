#include <iostream>     // std::cout, std::boolalpha
#include<bits/stdc++.h>


int main(){
    int n;
    std::cin>>n;
    if(n%2 !=0){
        std::cout<<-1<<std::endl;
    }
    else{
        for(int i=n; i>0; i--){
        std::cout<<i<<" ";
        }
    }
}