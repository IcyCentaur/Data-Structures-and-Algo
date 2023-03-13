    #include <iostream>
    using namespace std;
     
    void moves(){
        int x,y;
        cin>>x>>y;
        if((x*y) == 0){
            cout<<(2 * abs(x + y) - 1)<<endl;
            return;
        }
        else{
            x = abs(x);
            y = abs(y);
            if(x == y){
                cout<<(2 * x)<<endl;
                return;
            }
            cout<<(min(x,y) * 2) + (2 * ( max(x,y) - min(x,y)) - 1)<<endl;
        }
    }
     
    int main() {
        int t;
        cin>>t;
        while(t--){
            
            moves();
        }
     
        return 0;
    }
