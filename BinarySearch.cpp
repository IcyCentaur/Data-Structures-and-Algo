#include <iostream>
#include <vector>

using namespace std;

int binarySearch(int arr[], int find, int start, int end)
{
    if (end >= start) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == find) return mid;
        if (arr[mid] > find) return binarySearch(arr, find, start, mid - 1);
        return binarySearch(arr, find, mid + 1, end);
    }
    return -1;
}

int main(){
    int size, n;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be found: ";
    cin>>n;
    cout<<binarySearch(arr, n, 0, size - 1);
    return 0;
}