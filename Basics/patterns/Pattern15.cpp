#include <iostream>
int main(){
    for (int q = 0; q<5; q++){
        for (int x = 5; x>q; x--){std::cout<<(char)('F'-x)<<" ";

        }
        std::cout<<"\n";

    }
    return 0;
}