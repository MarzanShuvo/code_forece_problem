#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>

int main(){

    std::string s, temp, last, l;
    int lenght;
    std::getline(std::cin, s);
    std::stringstream X(s);
    while(std::getline(X, temp, ' ')){
        if(temp == "?"){
            break;
        }
        if(temp == ""){
            continue;
        }
        else{
            last = temp;
        }
    }

    //std::cout<<last<<std::endl;
    lenght = last.length();
    if(last[lenght-1]=='?'){
        //l = last[lenght-2];
        //std::cout<<l<<std::endl;
        if(last[lenght-2]=='a'|| last[lenght-2]=='e'||last[lenght-2]=='i'||last[lenght-2]=='o'||last[lenght-2]=='u' || last[lenght-2]=='y' ||last[lenght-2]=='A'|| last[lenght-2]=='E'||last[lenght-2]=='I'||last[lenght-2]=='O'||last[lenght-2]=='U' || last[lenght-2]=='Y'){
        std::cout<<"YES"<<std::endl;
    }
        else{
            std::cout<<"NO"<<std::endl;
        }

    }
    else{
        //l = last[lenght-1];
        //std::cout<<l<<std::endl;
        if(last[lenght-1]=='a'|| last[lenght-1]=='e'||last[lenght-1]=='i'||last[lenght-1]=='o'||last[lenght-1]=='u' || last[lenght-1]=='y' ||last[lenght-1]=='A'|| last[lenght-1]=='E'||last[lenght-1]=='I'||last[lenght-1]=='O'||last[lenght-1]=='U' || last[lenght-1]=='Y'){
        std::cout<<"YES"<<std::endl;
    }
        else{
            std::cout<<"NO"<<std::endl;
        }
    }
    

}