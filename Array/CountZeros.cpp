#include<iostream>
using namespace std;
void CountZeroOrOnes(int arr[],int size){
        int CountZero=0;
        int CountOnes=0;
        for(int i =0;i<size;i++){
            if(arr[i]==0){
                CountZero++;
            }
            else{
                CountOnes++;
            }

        }
        cout<<CountZero<<endl;
        cout<<CountOnes<<endl;


    
    }
int main(){
    
    int arr[]={0,0,0,0,1,1,1,1,1};
    int size=9;
    CountZeroOrOnes(arr,size);
    
    
}