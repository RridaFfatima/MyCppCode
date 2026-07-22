#include<stdio.h>
int main(){
    unsigned char c=255;
    signed char s=127;
        printf("before overflow  %u \n" ,c);
    printf("before overflow  %d \n" ,s);

    c=c+1;
    s=s+1;

    printf("after overflow  %u \n" ,c);
    printf("after overflow  %d \n" ,s);
    return 0;
}