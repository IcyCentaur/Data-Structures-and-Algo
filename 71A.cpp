#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string n;
    int x;
    cin>>x;
    while(x--){
        cin>>n;
        int len = n.length();
        if(len>10){
            cout<<n[0]<<len-2<<n[len-1]<<endl;
        }
        else cout<<n<<endl;
    }
        return 0;
}