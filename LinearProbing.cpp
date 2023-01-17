#include <iostream>
#include <vector> 
using namespace std;

void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int n){
    for(int i = 0; i < n; i++){
        int k = 0;
        for(int j = 0; j < hashSize; j++){
            int hashValue = (arr[i] + k) % hashSize;
            if(hash[hashValue] != -1 && hash[hashValue] != arr[i]) {
                k++;
                continue;
            }
            hash[hashValue] = arr[i]; 
            break;
        }
    }
}

int main(){
    int hashSize, n;
    cin>>hashSize;
    cin>>n;
    int arr[4];
    //cout<<"Enter arr: \n";
    for(int i = 0; i < n; i++){
    //cout<<"Enter: ";    
    cin>>arr[i];
    cout<<endl;
    }
    vector<int> hash(hashSize, -1);
    QuadraticProbing(hash, hashSize, arr, n);
    //cout<<"To print Hash Table\n";
    for(auto x : hash){
        cout<<x<<"  ";
    }
    return 0;
}