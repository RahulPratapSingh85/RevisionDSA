#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    for(int i =0;i<size-1;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[]={2,3,4,5,6,7};
    int size=6;
   int ans= sum(arr,size);
   cout<<ans<<endl;
}