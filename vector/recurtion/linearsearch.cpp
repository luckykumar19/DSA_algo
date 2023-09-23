#include<iostream>
using namespace std;
bool Search(int arr[],int size,int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingpart=Search(arr+1,size-1,k);
        return remainingpart;
    }
}
int main(){
    int arr[5]={5,3,8,2,6};
     int size =5;
     int key=2;
     
     bool ans =Search(arr,size,key);
     if(ans){
        cout<<"Present"<<endl;
     }
     else{
        cout<<"absent";
     }

    return 0;
}