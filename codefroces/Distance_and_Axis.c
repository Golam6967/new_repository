#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
int i,j,m=0,n=0,t,a=0,c=0,b=0,d=0,e,k,sum=0,min=0,max=0;
scanf("%d",&n);
int arr[n];
sum=0;
max=0;
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
        if(arr[i]<0){
            sum+=arr[i];
        }
    if(arr[i]>=0){
        max+=arr[i];
    }
}
sum*=-1;
printf("%d",max+sum);

return 0;
}