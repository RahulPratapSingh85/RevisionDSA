#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int i){
    if(i>=n){
        return;
    }
    // cout<<arr[i]<<endl;// this is for forward order
    print(arr,n,i+1);
     cout<<arr[i]<<endl;// in reverse order
}
int main(){
    int arr[]={10,20,30,40};
    int n=4;
    int i=0;
    print(arr,n,i);
}