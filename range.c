// write a program to check the given number is in the range of -4 to 6
#include <stdio.h>
int main() {
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    int upper=a>=-4;
    int lower=a<=6;
    int res=(upper&&lower);
    printf("The %d is in the range %d",a,res);
     return 0;
}