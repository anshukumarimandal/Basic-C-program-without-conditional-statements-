// write a c program to check the given numbers is factorial of 10
#include <stdio.h>

int main() {
    int x;
    printf("Enter the x value:");
    scanf("%d",&x);
    int res=(10%x==0);
    printf("The %d number is factorial of 10 is %d",x,res);
     return 0;
}