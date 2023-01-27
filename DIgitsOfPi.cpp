#include <iostream>
#include <cstring>

using namespace std;

int compare(string s){
    int x = 0;
    string pi = "314159265358979323846264338327";
    for(int i = 0; i < 30; i++){
        if(s[i] == pi[i]){
            x++;
            continue;
        }
        break;
    }
    return x;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        cout<<compare(n)<<endl;
    }
    return 0;
}