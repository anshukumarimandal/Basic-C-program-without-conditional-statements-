#include <stdio.h>

int main() {
    int a=10;
    int b=a++;
    a=a++;
    b=b++;
    printf("a=%d\n",a);//11
    printf("b=%d\n",b);//10
    return 0;
    }
    