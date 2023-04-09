// print the factorial of a number n.

#include<stdio.h>
int main(){

    int i,n;
    printf(" enter the number : ");
    scanf("%d",&n);

    int fact=1;

    for(int i=1;i<=n;i++){
        fact = fact*i;
    }

    printf(" the factorial of a given number %d\n", fact);


    return 0;
    
}