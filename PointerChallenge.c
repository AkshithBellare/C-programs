#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   char * pchar;
   int estNum;
   printf("\nPlease enter the estimated length of the string to be entered : ");
   scanf("%d",&estNum);
   pchar=(char*)malloc(estNum);
   printf("\nEnter the string : ");
   scanf("%s",pchar);
   printf("\nString entered : %s\n",pchar);
   free(pchar);
}