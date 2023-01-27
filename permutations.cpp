#include <iostream>
#include <cstring>

using namespace std;

int search(int arr[], int size, int find){
    for (int i = 0; i < size; i++)
        if (arr[i] == find) return i;
    return -1;
}

void perm(int arr[], int x){
    int op[x];
    for(int i = 0; i < x; i++){
        int no = *(arr + i);
        int x = search(op, x, no);
        if(x == -1) op;
    }
}