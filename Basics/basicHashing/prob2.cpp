#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = 6;
    bool visited[n];
    for (int i =0; i<n; i++){
        visited[i] = false;

    }

    int maxcount = 0;
    int mincount = 6;
    int maxElement =0;
    int minElement = 0;

    for (int i=0; i<n; i++){
        if (visited[i]){
            continue;
        }
        int count = 1;
        for (int j = i+1; j<n; j++){
            if(arr[j]==arr[i]){
                count++;
                visited[j]=true;
            }
        }
    
        if(count>maxcount){
            maxcount = count;
            maxElement = arr[i];
        }
        if(count<mincount){
            mincount = count;
            minElement = arr[i];
        }


    }
    cout<<maxElement<<" "<<maxcount<<"\n";
    cout<<minElement<<" "<<mincount;
}