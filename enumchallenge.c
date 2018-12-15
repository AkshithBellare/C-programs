#include<stdio.h>
int main()
{
enum company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
enum company c1=XEROX,c2=GOOGLE,c3=EBAY;
printf("%d\n%d\n%d\n",c1,c2,c3);
}
