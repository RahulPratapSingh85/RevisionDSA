#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={12,23,34,45,56};
    // v.erase(v.begin());//23 34 45 56
    v.erase(v.begin()+1);//23 34 45 56 jaha se start hoga o  delete ho jayega
    
    for(int num:v){
        cout<<num<<endl;
    }

    
}