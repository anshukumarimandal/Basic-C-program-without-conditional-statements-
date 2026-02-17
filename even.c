// write a program to check the numbers is even
#include <stdio.h>

int main() {
    int a;
    printf("Enter the a value:");
    scanf("%d",&a);
    int res=(a%2==0);
    printf("The %d is odd number is %d",a,res);
     return 0;
}
    