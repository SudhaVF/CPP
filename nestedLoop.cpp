#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){ //many Line
        cout<<"*****"<< endl;
    }

    int x = 50; // single line
    for(int i=1; i<=x; i++){
        cout<<"*";
    }
    cout<<endl;
    return 0;
}