#include <iostream>
using namespace std;
long long int moves = 0;
long long int towerOfHanoi(int n, char a, char b, char c){
    
    if(n == 1) {
        cout<<"Moving disc 1 from "<<a<<" to "<<c<<endl;
        moves += 1;
        return moves;
    }
    towerOfHanoi(n-1, a, c, b);
    cout<<"Moving disc "<<n<<" from "<<a<<" to "<<c<<endl;   
    moves++;
    towerOfHanoi(n-1, b, a, c); 
    return moves;
}

int main(){
    cout<<towerOfHanoi(3, '1', '2', '3');
    //cout<<"Total moves = "<<moves;
    return 0;

}
