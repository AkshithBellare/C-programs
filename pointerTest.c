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
printf("\nThe value stored in the variable: %d\n",*intPointer);
//checking the size of the pointer data type
printf("\nThe size of intPointer is       : %i bytes\n",(int)sizeof(intPointer));
}
