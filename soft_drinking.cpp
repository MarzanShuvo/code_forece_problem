#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>

int main(){
    int n, k, l, c, d, p, nl, np, total_mili, is_enough_d, is_enough_salt, is_enought_slice,result, max = 1000;
    std::cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    if(n>max||k>max||l>max||c>max||d>max||p>max||nl>max||np>max||n<1||k<1||l<1||c<1||d<1||p<1||nl<1||np<1){
        std::cout<<0<<std::endl;
    }
    else{
        total_mili = k*l;
        is_enough_d = total_mili/nl;
        is_enough_salt = p/np;
        is_enought_slice = c*d;
        result = std::min(is_enough_d, is_enough_salt);
        result = std::min(result, is_enought_slice);
        result = result/n;
        std::cout<< result<<std::endl;

    }

}