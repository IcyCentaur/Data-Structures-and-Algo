#include <iostream>
#include <cstring>
using namespace std;

void check(string s){
    int arr[] = {0, 0};
    for(auto i : s){
        if(i == 'D'){
            arr[1] -= 1;
        }
        else if(i == 'U'){
            arr[1] += 1;
        }
        else if(i == 'L'){
            arr[0] -= 1;
        }
        else if(i == 'R'){
            arr[0] += 1;
        }
        if(arr[0] == 1 && arr[1] == 1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int y;
        cin>>y;
        string x;
        cin>>x;
        check(x);
    }
    return 0;
}
