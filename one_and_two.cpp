#include <bits/stdc++.h>
using namespace std;

int all_1(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] != 1) return 0;
    }
    return 1;
}

int even_2s(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 2) count++;
    }
    if(count % 2 == 0) return count;
    return -1;
}

int minVal(int arr[], int n){
    int count_1 = all_1(arr, n);
    if(count_1 == 1) return 1;
    int count = even_2s(arr, n);
    if(count == -1) return -1;
    int numberOf2 = 0;
    int j;
    //int inside_array;
    for(j = 0; j < n; j++){
        if(arr[j] == 2){
            numberOf2++;
            if(numberOf2 == count / 2) break;
        }
    }
    return j + 1;
}

int main() {
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        cout<<minVal(arr, n);
        cout<<endl;
    }
    return 0;
}
