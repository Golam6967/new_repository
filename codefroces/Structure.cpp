#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>v,int n,int target){
for(int i=0,j=n-1;i<j;){
    int mid = (i+j)/2;
    if(v[mid]<target){
            i = mid+1;
    }
    else if(v[mid]>target){
        j = mid-1;
    }
    else if(v[mid]==target){
        return mid;
    }

}
return -1;
}
int main(){
long long int g,e,m,x=0,y,s,i=0,j,a,b,c=0,d=0,n,max=0,min=INT_MAX,sum=0,t,f=0,k;
vector<int>v;
for(i=0;i<7;i++){
    cin>>x;
    v.push_back(x);
}
cout<<"enter the number you want to find"<<endl;
cin>>n;
int value = binary_search(v,7,n);
cout<<value;
return 0;
}

