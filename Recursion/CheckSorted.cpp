#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n,int index){
    if(index>=n){
        return true;
    }
    if(arr[index]>arr[index-1]){
        bool ans= sorted(arr,n,index+1);
        return ans;

    }
    else{
        return false;
    }
}
int main(){
    int arr[]={12,23,45,4};
    int n=4;
    int index=0;
    bool ans=sorted(arr,n,index);
    cout<< ans<< endl;
}