#include<stdio.h>
void main(){
    int n, sum=0, i;
    printf("n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("%d",sum);
}
