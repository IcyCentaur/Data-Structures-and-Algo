    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
     
    void solve(){
        int n, even = 0, odd = 0;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i]%2 == 0) even += arr[i];
            if(arr[i]%2 != 0) odd += arr[i];
        }
        if(even > odd){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        return;
    }
     
     
    int main() {
        int t;
        cin>>t;
        while(t--) solve();
        return 0;
    }
