#include<stdio.h>
#include<limits.h>
int main(){
    printf("int: %d to %d \n",INT_MIN,", ",INT_MAX);
    printf("char:%d to %d \n ",SCHAR_MIN,", ",SCHAR_MAX,"\n");
    printf("long:%ld to %ld \n ",LONG_MIN,", ",LONG_MAX,"\n");
    printf("long long: %lld to %lld \n ",LLONG_MIN,", ",LLONG_MAX,"\n");
    printf("short:%d to %d \n ",SHRT_MIN,", ",SHRT_MAX,"\n");

    printf("unsigned: ");
     printf("int: 0 %u to %u \n, " ,UINT_MAX );
    printf("char: 0%u to %u \n , ",UCHAR_MAX);
    printf("long: 0 %lu to %lu \n, ",ULONG_MAX);
    printf("long long: 0 %llu to %llu \n, ",ULLONG_MAX);
    printf("short: 0%u to %u \n , " ,USHRT_MAX);
return 0;

}