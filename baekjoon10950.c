#include <stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&i);
    for(int c=0;c<i;c++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
}