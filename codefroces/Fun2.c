
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int i,n,sum=0;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(int j=0;j<i;j++){
        printf("%d",i);
    }
    printf("\n");
}
return 0;
}

