/* Q3.Devlope a program that reads a string and 
prints the reverse of the string*/


#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i , len;
    printf("enter the string to be reverse: ");
    scanf("%s",str);

    len = strlen(str);


    printf("Reverse of the string is:");
    for(i=len-1;i>=0;i--){
    printf("%c",str[i]);
   }
   return 0;
}