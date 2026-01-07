#include<iostream>
using namespace std;
bool Search(int arr[],int target,int size){
    for(int i =0;i<size;i++){
        if(arr[i]==target){
            return true;
        
    }
   
}
 return false;
}
int main(){
    int arr[]={2,3,4,5,6,7};
    int target=6;
    int size=6;
    cout<<Search(arr,target,size)<<endl;;

}