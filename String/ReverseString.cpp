#include<iostream>
using namespace std;
int main(){
    string s="Rahul";
    int st=0;
    int end=s.size()-1;
    while(st<end){
        swap(s[st],s[end]);
        st++;
        end--;
    }
    cout<<s;
    int size=0;
    while(s[size]!='\0'){
        size++;
    }
    cout<<endl;
    cout<<size<<" ";
}