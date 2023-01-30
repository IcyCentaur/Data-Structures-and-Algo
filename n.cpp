#include <iostream>
#include <cmath>

using namespace std;

bool check(int x, int y, int n) {
    return pow(x, y) * y + pow(y, x) * x == n;
}

int solution(int n){
    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            if (check(x, y, n)) {
                cout << x << " " << y << endl;
                return 0;
            }
        }
    }
    
    cout<<-1<<endl;
    return 0;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        solution(n);
    }
    return 0;
}
