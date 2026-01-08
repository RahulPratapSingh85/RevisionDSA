#include<iostream>
using namespace std;
void solve(string& str,int index){
    if(index==-1){
        return;
    }
    str[index]='A'+str[index]-'a';
    solve(str,index-1);
}
int main(){
    string str="rahul";
    solve(str,4);
    cout<<str<<" ";
}