#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(auto x : v){
        cout << x << ' ';
    }
    cout << '\n';
}