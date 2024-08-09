#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    vector<char>test;
    for(i=0;i<5;i++){
        char x;
        cin>>x;
        test.push_back(x);
    }
    for(auto it:test){
        cout<<it<<endl;
    }
    char str[] = "msuab";
    string str1  = str;
    cout<<str1;
return 0;
}
