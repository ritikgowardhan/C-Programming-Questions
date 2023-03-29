/* Q1. Devlope a program that reads a 
string and counts the number of alphabets, digits, 
other charecters.*/


/*The ASCII values range of A to Z is 65 to 90, 
and a to z is 97 to 122 and 0 t0 9 is 48 to 57.*/

#include<stdio.h>
int main(){
    char s[100];
    printf("Enter the string: ");
    scanf("%s",s);
    int i =0, alphabet =0, digits = 0, specialchar = 0;

    for (i=0;s[i];i++){
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<= 122)){
            alphabet++; 
        }
        else if(s[i]>=48 && s[i]<=57)
        {
            digits++;
        }
        else{
            specialchar++;
        }
    }

        printf(" The count of Albhabet : %d\n",alphabet);
        printf(" The count of Digits: %d\n",digits);
        printf(" The count of special Charecter:  %d\n",specialchar);
        return 0;
}