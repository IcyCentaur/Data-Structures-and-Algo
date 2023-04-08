#include <bits/stdc++.h>
#include <array>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int arr[n] = {9};
    if(n == 1){
        cout<<9<<endl;
        return;
    }
    int count = 8;
    for(int i = 1; i < n; i++){
        if(count == 9){
            arr[i] = count;
            count = 0;
            continue;
        }   
        arr[i] = count;
        count++;
 
    }
    for(int i = 0; i < n; i++) cout<<arr[i];
    cout<<endl;
    
}
 
int main(){
    int test;
    cin>>test;
    while(test--) solve();
    //solve();
    return 0;
}
