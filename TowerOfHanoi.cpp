#include <iostream>
using namespace std;

int moves = 0;
void towerOfHanoi(int n, char a, char b, char c){
    if(n == 1) {
        cout<<"Moving disc 1 from "<<a<<" to "<<c<<endl;
        moves++;
        return;
    }
    towerOfHanoi(n-1, a, c, b);
    cout<<"Moving disc "<<n<<" from "<<a<<" to "<<c<<endl;   
    moves++;
    towerOfHanoi(n-1, b, a, c); 
}

int main(){
    towerOfHanoi(3, 'A', 'B', 'C');
    cout<<"Total moves = "<<moves;
    return 0;

}