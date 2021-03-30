#include <stdio.h>
 
int main(void) {
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		int b,c;
		scanf("%d %d",&b,&c);
		printf("Case #%d: %d + %d = %d\n",i,b,c,b+c);
	}
}