#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int i,n,sum=0;
printf("Enter the numbers : ");
scanf("%d",&n);
int e = n;
for(i=0;e>0;i++){
    e/=10;
}
int last=n%10;
int first = n/10;
int rem=0;
int reverse_num=0;
reverse_num =  n-((n/pow(10,i-1)) );

printf("%d",reverse_num);
return 0;
}


