#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0 ;i<n ; i++){
        for(int j= 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Before sorting: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "After sorting:  ";
    printArray(arr, n);

    return 0;
}