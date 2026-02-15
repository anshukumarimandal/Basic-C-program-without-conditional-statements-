//   write a program to check the numbers is odd
#include <stdio.h>

int main() {
    int x;
    printf("Enter the x value:");
    scanf("%d",&x);
    int res=(x%2!=0);
    printf("The %d is odd number is %d",x,res);
     return 0;
}
    