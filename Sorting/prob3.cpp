#include <iostream>
using namespace std;

void Sort(int arr[], int n){
    
    for(int i = 1; i<n; i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;

            }

        }

void printArray(int arr[], int n){
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
        cout<< endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>> n;

    int arr[n];
    cout<<"Enter the elements: ";
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Before sorting: ";
    printArray(arr, n);

    Sort(arr,n);

    cout<<"After sorting: ";
    printArray(arr,n);

    return 0;



}