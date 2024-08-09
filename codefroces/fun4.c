#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int i,n,sum=0,a,b,c;
printf("Enter the three sides of the triangle : \n");
scanf("%d %d %d",&a,&b,&c);
if(((a*a)+(b*b))==(c*c)){
    printf("YES");
}
else if(((c*c)+(b*b))==(a*a)){
    printf("YES");
}
 else if(((a*a)+(c*c))==(b*b)){
    printf("YES");
}
else{printf("NO");
}
return 0;
}

