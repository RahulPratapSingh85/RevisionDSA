#include<bits/stdc++.h>
using namespace std;
void findmini(int arr[],int n, int index,int &mini){
    if(index>=n){
        return ;
    }
    mini=min(mini,arr[index]);
    findmini(arr,n,index+1,mini);
}
int main(){
    int arr[]={12,23,34,45,56};
    int n=5;
    int index=0;
    int mini=INT_MAX;
    findmini(arr,n,index,mini);
    cout<< mini<<" ";
}