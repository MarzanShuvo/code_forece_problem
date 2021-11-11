#include <iostream>     // std::cout, std::boolalpha
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> v(n);
    std::vector<int> final(3, 0);
    for(int i=0; i<n;i++){
        std::cin>>v[i];
    }
    for(int i=0; i<n; i++){
        int j = i%3;
        final[j] += v[i];
    }
    int maxIndex = std::max_element(final.begin(),final.end()) - final.begin();
    if(maxIndex ==0){
        std::cout<<"chest"<<std::endl;
    }
    if(maxIndex ==1){
        std::cout<<"biceps"<<std::endl;
    }
    if(maxIndex ==2){
        std::cout<<"back"<<std::endl;
    }
}