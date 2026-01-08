#include<bits/stdc++.h>
using namespace std;


int linear(int arr[],int target,int n,int index){
    if(index==n){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    return linear(arr,target,n,index+1);
}
int solve(int arr[],int n,int target){

    int ans= linear(arr,target,n,0);
    return ans;
}

int main(){
    int arr[]={1,2,3,4};
    int n=4;
    int target=3;
    int ans=solve(arr,n,target);
    cout<<ans<<" ";
}