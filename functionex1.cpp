#include<iostream>
using namespace std;

//sum of 2 numbers
int sum(int a,int b){
    int s = a + b;
    return s;
}

//min of 2 num
int minOfTwo(int a, int b){ //parameter
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout<< sum(10,5) << endl;
    cout << "min="<<minOfTwo(5,3)<<endl; //arguments
    return 0;
}