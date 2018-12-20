#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char * pchar=NULL;
    pchar=(char*)malloc(15);
    strcpy(pchar,"Akshith");
    printf("string is : %s address is : %u",pchar,pchar);
    pchar=(char*)realloc(pchar,25);
    strcat(pchar,"Bellare");
    printf("\nstring is : %s address is : %u",pchar,pchar);
    return 0;
}
