#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int n,int target,int index){
    if(index>=n){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    return search(arr,n,target,index+1);
}
int main(){
    int arr[]={12,34,56,78};
    int n=4;
    int target=56;
    int index=0;
    bool ans=search(arr,n,target,index);
    cout<<ans<< " ";
}