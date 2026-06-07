#include <iostream>

int main(){
    for (int q = 0; q<5; q++){
        for (int x = 0; x<=q; x++){std::cout<<(char)(65+q)<<" ";}
        std::cout<<"\n";
    }
    return 0;
}