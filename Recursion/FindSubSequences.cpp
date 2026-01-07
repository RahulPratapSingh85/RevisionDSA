#include<bits/stdc++.h>
using namespace std;
void find(string str,string output,int index,vector<string>&ans){
    if(index>=str.length()){
        ans.push_back(output);
        return;
    }
    char ch=str[index];
    output.push_back(ch);
    find(str,output,index+1,ans);
    output.pop_back();
    find(str,output, index+1, ans);
}
int main(){
    string str="abc";
    string output="";
    int index=0;
    vector<string>ans;
    find(str,output,index,ans);
   for(auto s:ans){
    cout<< s << endl;
   }
}