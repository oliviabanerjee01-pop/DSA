#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {

            int num = n;

            if (i >= 1 && i <= 5 && j >= 1 && j <= 5)
                num = 3;

            if (i >= 2 && i <= 4 && j >= 2 && j <= 4)
                num = 2;

            if (i == 3 && j == 3)
                num = 1;

            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}