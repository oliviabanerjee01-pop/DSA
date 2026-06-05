#include <iostream>

int main() {
    int y = 1;
    for (int q = 0; q<5; q++){
        for (int x = 0; x<=q; x++){std::cout<<y++<<" ";}
        std::cout<<"\n";

    }
    return 0;

}