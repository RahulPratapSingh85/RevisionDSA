#include<bits/stdc++.h>
using namespace std;
void solve(int num,vector<int>&ans){
    if(num==0){
        return;
    }
    int digit=num%10;
    solve(num/10,ans);
    ans.push_back(digit);
}
int main(){
    int num=678;
    vector<int>ans;
    solve(num,ans);
    for(auto val:ans){
        cout<<val<<" ";
    }
}