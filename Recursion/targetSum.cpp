#include<iostream>
using namespace std;
bool solve(int arr[],int index,int n,int target){
    if(target==0) return 1;
    if(index==n||index<0) return 0;
    return solve(arr,index+1,n,target)||solve(arr,index+1,n,target-arr[index]);
}
int main(){
    int arr[]={2,4,1,8,7};
    int target=19;
    bool ans=solve(arr,0,5,target);
    cout<<ans<<" ";
}