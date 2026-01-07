#include<iostream>
using namespace std;
int sum(int n){
    if(n==1)
        return 1;
    
    int curresntsum;
    return n+sum(n-1);
    return curresntsum;
}
int main(){
    int n=2;
    int ans=sum(n);
    cout<< ans<<endl;
}