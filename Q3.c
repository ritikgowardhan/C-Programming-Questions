// print all 1 to 10 number but not 6

#include<stdio.h>
int main(){
    int i;
    for(i=1 ; i<=10 ; i++){
        if(i==6){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
    
}