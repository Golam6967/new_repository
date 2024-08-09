#include<stdio.h>
int i=4;int n=6;
int mf(int j,int sum){

    if(i>n){
        return sum;
    }
    else{
        sum+=j*j;
        printf("%d\n",sum);
        j+=2;
        i++;
        return mf(j,sum);
    }
}
int main(){
    int j=1,sum=0;
    sum = mf(j,sum);
    printf("%d",sum);
    return 0;
}

