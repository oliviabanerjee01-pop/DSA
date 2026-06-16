#include <iostream>

void reverse(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int n;
    std::cout << "Input size: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Input elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    reverse(arr, n);

    std::cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}