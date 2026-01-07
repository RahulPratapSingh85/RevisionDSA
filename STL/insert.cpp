#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,20,30};
    v.insert(v.begin()+1,20);
    for(int num:v){
        cout<<num<<endl;
    }
    return 0;
}