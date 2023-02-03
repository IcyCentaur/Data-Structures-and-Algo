#include <iostream>
#include <cstring>
using namespace std;

void check(char s){
    char arr[] = {'c','o','d','e','f','r','s'};
    for(auto i : arr){
        if(s == i){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        char x;
        cin>>x;
        check(x);
    }
    return 0;
}
