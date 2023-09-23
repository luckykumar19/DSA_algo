#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s; i<=e; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}
bool Search(int *arr,int s, int e,int k){
    print(arr,s,e);

    //base case
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if (arr[mid]<k)
    {
        /* code */
        return Search( arr,mid+1,e,k);
    }
    else{
        return Search(arr,s,mid-1,k);
    }
    
}
int main(){
    int arr[5]={1,6,10,15,16};
    int size=5;
    int key=6;
     cout<<"present or not "<<Search(arr,0,4,key)<<endl;
    return 0;
}