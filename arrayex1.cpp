#include<iostream>
using namespace std;

int main(){
    int marks[5] = {99, 100, 65, 72,80};
    int size = 5;

    //loops=0 to size-1
    for(int i=0; i<size; i++){
        cout << marks[i] << endl;
    }
    return 0;
}
