#include <iostream>
#include <vector>

using namespace std;

int binarySearch(int arr[], int find, int start, int end){
    if(end >= 1) {
        int mid = start + (end - 1) / 2;
        if(arr[mid] == find) return mid;
        if(arr[mid] > find){
            
            //cout<<"Searching "<<i<<" \n";
            binarySearch(arr, find, start, mid - 1);
        }
        if(arr[mid] < find){
            //cout<<"Searching "<<i<<" \n";
            binarySearch(arr, find, mid + 1, end);
        }
        return -1;
    }
}

int main(){
    int size, n;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the element to be found: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<binarySearch(arr, n, 0, size - 1);
    return 0;
}