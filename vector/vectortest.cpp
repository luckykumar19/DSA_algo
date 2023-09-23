#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int size,value,x,y,z;
    cin>>size;
    for (int i; i<size; i++) {
     cin>>value;
     v.push_back(value);
    }
    
    cin>>x>>y>>z;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(y-1),v.begin()+(z-1));
    return 0;
}
