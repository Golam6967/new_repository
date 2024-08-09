#include<bits/stdc++.h>
using namespace std;
int recursion(int ind,vector<int>v,int prev){
if(ind==v.size()){
    return 0;
}
int len = recursion(ind+1,v,prev);
if(prev==-1 || v[prev]<v[ind]){
    len = max(len,1+recursion(ind+1,v,ind));
}
return len;

}
int find_prefixes(int ind,vector<int>v,int sum,vector<vector<int>>dp){
    if(sum==0){
        return 0;
    }
    if(ind==0){
    if(sum%v[ind]==0){
        return sum/v[ind];
    }
        return INT_MAX;
}
if(dp[ind][sum]!=-1){
    return dp[ind][sum];
}
int not_take = find_prefixes(ind-1,v,sum,dp);
int take = INT_MAX;
if(v[ind]<=sum){
    take = 1+find_prefixes(ind,v,sum-v[ind],dp);
}
return dp[ind][sum] = min(take,not_take);
}






int binary_power(int n,int maxi){
    int i =1;
    int j = maxi;
    while(i<=j){
        int mid = (i+j)/2;
        if(pow(n,mid)>=maxi){
                if(pow(n,mid-1)<maxi){
                return mid;
                }
                else{
                    j=mid-1;
                }
        }
        else if(pow(n,mid)<maxi){
                i=mid+1;
        }
        else if(pow(n,mid)>maxi){
                j=mid-1;

        }
    }
    return -1;
}
int main(){
long long int a,k,sum,t,d,x,n,i,j=0,b,c=0,m;
cout<<sqrt(46)*sqrt(6);
return 0;
}
