#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int ans = 0;
    while(x--){
        int a,b,c;
        cin>>a>>b>>c;
        a+b+c>=2? ans++ : ans += 0 ;
    }
    cout<<ans;
    return 0;
}