#include<iostream>
using namespace std;
int main(){
    int n=4;
   
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<< " * ";
        }
        
        //print spaces
        int spaces=2*(n-i);
        for(int j=0;j<spaces;j++){
            cout<< " ";

        }
        for(int j=0; j<=i; j++){
            cout<< " * ";
        }
       
        cout<<endl;
    }
    //bottom part
    for(int i=n-1; i>=0; i--){
        for(int j=0;j<=i; j++){
            cout<<"*";
        }
        int spaces=2*(n-i);
        for(int j=0; j<spaces; j++){
            cout<< " ";
        }
        cout<<endl;
    }
    return 0;

}