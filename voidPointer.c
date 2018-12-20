//
//  voidPointer.c
//  
//
//  Created by Akshith Bellare 👑 on 20/12/18.
//

#include <stdio.h>
int main(void)
{
    void * vptr;
    int value;
    printf("\nEnter an integer : ");
    scanf("%d",&value);
    vptr=&value;
    printf("\nThe value entered is %i\n",*(int*)vptr);
}
