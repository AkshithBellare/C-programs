#include<stdio.h>
struct aAndP
{
   float area;
   float perimeter;
};
struct aAndP  areaFun(int);
int main(void)
{
    int radius;
printf("\nEnter the radius : ");
scanf("%d",&radius);
struct aAndP result=areaFun(radius);
printf("\n1.Area is      : %f",result.area);
printf("\n2.Perimeter is : %f",result.perimeter);
}
struct aAndP areaFun(int radius)   //Structures allow us to return multiple times from a function.
 {
    struct aAndP result;
    result.area=3.14*radius*radius;
    result.perimeter=2*3.14*radius;
    return result;
}