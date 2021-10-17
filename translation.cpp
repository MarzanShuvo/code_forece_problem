#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>

int main(){
    std::string m, n;
    int flag = 0;
    std::cin>>m>>n;
    int lenght_m = m.length();
    int lenght_n = n.length();
    if(lenght_m==lenght_n){
        for(int i=0; i<lenght_m; i++){
            if(m[i]!=n[lenght_m-i-1]){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            std::cout<<"YES"<<std::endl;
        }
        else{
            std::cout<<"NO"<<std::endl;
        }
    }
    else{
        std::cout<<"NO"<<std::endl;
    }

    return 0;

}