#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 32

int main(void)
{
    char str[STRSIZE] = "helloworld";
    printf("str = %-10.5s[over]\n",str);



    
    return 0;
}