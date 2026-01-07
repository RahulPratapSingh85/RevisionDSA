#include<iostream>
#include<limits.h>
using namespace std;
int findMinimum(int arr[],int size){
    int miniAns=INT_MAX;
    for(int i =0;i<size;i++){
        if(arr[i]<miniAns){
            miniAns=arr[i];
        }
    }
    return miniAns;
}
int main(){
    int arr[]={2,3,4,5,6};
    int size=5;
    int min=findMinimum(arr,size);
    cout<<min<<endl;
}