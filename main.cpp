#include<stdio.h>
#include"max.h"
#include"min.h"
#include"compare.h"
int main(void){
    int a=1;
    int b=2;
    int c;
    c=findmax(a,b);
    printf("Hello World!  %d\n",c);
    printf("Hello Minus folder!  %d\n",minus(10,b));
    printf("COMPARE_A_B!  %d\n",compareab(10,c));
    return 0;
}