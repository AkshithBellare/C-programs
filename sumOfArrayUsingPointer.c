//
//  sumOfArrayUsingPointer.c
//  
//
//  Created by Akshith Bellare 👑 on 20/12/18.
//

#include <stdio.h>
int sumOfArray(int [],int);
int main(void)
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    printf("The sum of the array is %i\n",sumOfArray(array,10));
}
int sumOfArray(int a[],int n)
{
    int * ptr=NULL;
    int sum=0;
    for(int i=0,ptr=a;i<n;ptr++,i++)
    {
        sum+=*ptr;
    }
    return sum;
}
