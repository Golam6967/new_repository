#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int i,n,sum=0;
printf("Input the number: ");
scanf("%d",&n);
int e=n;
for(i=0;e>0;i++){
    e/=10;
}
    int rem=0;
for(int j=0;n>0;j++){
    rem=n%10;
    sum+=pow(rem,i);
    n/=10;
}
if(sum==n){
    printf("The number is Armstrong number");
}
else{printf("The number is not an armstrong number")}
return 0;
}
