#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int start,int end,int target){
    if(start>end){
        return -1;
    }
    int mid=start+(end -start)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        return binary(arr,mid+1,end,target);
    }
    else{
 return binary(arr,start,mid-1,target);
    }

}
int main(){
    int arr[]={12,23,45,67};
    int n=4;
     int start=0;
     int end=n-1;
     int target=45;
     int ans=binary(arr,start,end,target);
     cout<< ans<< endl;
    
}