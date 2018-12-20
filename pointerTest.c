#include<stdio.h>
#include<stddef.h>
int main(void)
{
int number=13;
int * intPointer=NULL;
intPointer=&number;
printf("\nAddress of number is            : %p\n",&number);
printf("\nAddress of intPointer is        : %p\n",(void*)&intPointer);
printf("\nAddress stored in intPointer is : %p\n",intPointer);
}
