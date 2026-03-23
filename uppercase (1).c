// write a program to check the given character is upper case or not 
#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    int upper=ch>=65;
    int lower=ch<=90;
    int res=(upper&&lower);
    printf("The %c is in upper case %d",ch,res);
     return 0;
}
