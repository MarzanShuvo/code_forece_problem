#include <iostream>
#include<bits/stdc++.h>

int main(){
    int matrix[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            std::cin>>matrix[i][j];
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(matrix[i][j]==1){
                std::cout<< abs(2-i)+abs(2-j)<<std::endl;
            }
        }
    }
}