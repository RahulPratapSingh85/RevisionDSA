#include<iostream>
using namespace std;
int solve(string str,int index){
    if(index==-1){
        return 0;
    }
    if(str[index]=='a'||str[index]=='u'||str[index]=='o'||str[index]=='i'||str[index]=='e' ){
        return 1+solve(str,index-1);
    }
    else{
        return solve(str,index-1);
    }
}
int main(){
string str="Rahul";
int ans=solve(str,4);
cout<< ans<<" ";

}