#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n, int index,vector<int>&ans){
    if(index>=n){
        return ;
    }
    if(arr[index]%2==0){
        ans.push_back(arr[index]);
    }
    solve(arr,n,index+1,ans);

}
int main(){
    int arr[]={2,44,55,66,77,88,90};
    int n=7;
    int index=0;
    vector<int>ans;
    solve(arr,n,index,ans);
    for(auto val:ans){
        cout<< val<<" ";
    }
}