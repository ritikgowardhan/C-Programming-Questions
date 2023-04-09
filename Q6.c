// print reverse of the table for a number n.

#include<stdio.h>
int main(){
    int i,n;
    printf(" enter the number");
    scanf("%d",&n);

    for(i=10 ; i>=1 ; i--){
        printf(" the table is %d\n",n*i);
    }

    return 0;
    
}