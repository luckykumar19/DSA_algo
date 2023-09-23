#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> L;
    vector<int> a(5,3);
    cout<<"Print a"<<endl;
    for(int i:a){
        cout<<i<<" "<<endl;
    }
    cout<<"size->"<<L.capacity()<<endl;
     L.push_back(3);
     L.push_back(4);

     cout<<"size->"<<L.capacity()<<endl;
     cout<<"front"<<L.front()<<endl;
     cout<<"back"<<L.back()<<endl;
    return 0;
}