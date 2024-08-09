#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int compare(const void *x_void,const void *y_void){
int x = *(int *)x_void;
int y = *(int *)y_void;
return x-y;
// qsort(arr,n,sizeof(int),compare);

}
int main(){
int i,j,a,b,c,d,e,f,min,max,sum,t,k,n;
scanf("%d",&t);
for(k=0;k<t;k++){
scanf("%d %d %d",&a,&b,&n);
for(i=0;(a+b)<=n;i++){
    if(a==b){
        a+=b;
    }
    else if(a>b){
        if(a/2 >= b){
            b+=a;
        }
        else{a+=b;}

    }
    else if(b>a){
        if(b/2 >= a){
            a+=b;
        }
        else{b+=a;}

    }
    if((a+b)>n){
        break;
    }
}
printf("%d\n",i+1);
}
return 0;
}
