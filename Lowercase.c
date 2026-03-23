// write a program to check the given character is lower case or not 
#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    int upper=ch>=97;
    int lower=ch<=122;
    int res=(upper&&lower);
    printf("The %c is in lower case %d",ch,res);
     return 0;
}
