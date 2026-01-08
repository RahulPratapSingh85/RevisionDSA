#include<iostream>
using namespace std;
int solve(int arr[],int index,int n,int sum){
    if(index==n)
    return sum==0;
return solve(arr,index+1,n,sum)+solve(arr,index+1,n,sum-arr[index]);
}
int main(){
    int arr[]={2,5,6,1,3};
    int sum=8;
    int ans=solve(arr,0,5,sum);
    cout<<ans<<" ";

}