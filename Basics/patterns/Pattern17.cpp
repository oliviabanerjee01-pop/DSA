#include <iostream>
int main(){

for (int q = 0; q < 4; q++) {

    for (int x = 0; x < 4-q-1; x++) {
        std::cout << " ";
    }

    for (int y = 0; y <= q; y++) {
        std::cout << char('A' + y);
    }

    for (int y = q-1; y >= 0; y--) {
        std::cout << char('A' + y);
    }

    std::cout << "\n";
}
return 0;
}