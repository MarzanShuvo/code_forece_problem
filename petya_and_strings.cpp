#include <iostream>     // std::cout, std::boolalpha
#include <algorithm>    // std::lexicographical_compare
#include <cctype>
#include <string>
#include<bits/stdc++.h>


int main(){
    std::string first, second;
    std::cin>>first>>second;
    std::transform(first.begin(), first.end(), first.begin(), ::tolower);
    std::transform(second.begin(), second.end(), second.begin(), ::tolower);
    if(std::lexicographical_compare(first.begin(), first.end(), second.begin(), second.end())){
        std::cout<<-1<<std::endl;
    }
    if(std::lexicographical_compare(second.begin(), second.end(), first.begin(), first.end())){
        std::cout<<1<<std::endl;
    }
    if(std::lexicographical_compare(first.begin(), first.end(), second.begin(), second.end()) ==false && std::lexicographical_compare(second.begin(), second.end(), first.begin(), first.end())==false){
        std::cout<<0<<std::endl;
    }

}
