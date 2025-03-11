#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> vec;
    cout<<"size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(30);
    vec.push_back(35);
    cout << "after push back size="<< vec.size() << endl;
    vec.pop_back();//35

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(1) << endl;

    for(int val : vec) {
        cout<< val<<endl;
    }
    return 0;

}