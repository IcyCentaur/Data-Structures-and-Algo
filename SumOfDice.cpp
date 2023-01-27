#include <iostream>
#include <cstring>

using namespace std;

int sum(int n, int s, int r){
    int leftDie = n - 1;
    int leftSum = r;
    cout<<s - r<<" ";
    for(int i = 0; i < n - 1; i++){
        int out;
        if(leftSum == leftDie){
            cout<<1<<" ";
        }
        else {
            out = leftSum % leftDie;
            cout<<out<<" ";
        }
        leftSum -= out;
        leftDie--;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, s, r;
        cin>>n>>s>>r;
        sum(n, s, r);
    }
    return 0;
}