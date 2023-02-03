#include<bits/stdc++.h> 
using namespace std;

int check(string s, int n){
    int i = 0;
    int j = n - 1;
    while ((i < j && s[i] == '0' && s[j] == '1') || (i < j && s[j] == '0' && s[i] == '1')) {
        i++;
        j--;
    }
    int ans = j - i + 1;
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin >> s;
        cout<<check(s, n)<<"\n";
    }
    return 0;
}
