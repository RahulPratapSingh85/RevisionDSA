#include<iostream>
#include<limits.h>
using namespace std;
void reverse(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i =0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={2,3,4,5,6,7};
    int size=6;
    reverse(arr,size);
}