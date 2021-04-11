#include <stdio.h>

int main(void) {
	int a[9];
	int b=0,c=0;
	for(int i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>b)
		{
			b=a[i];
			c=i;
		}
	}
	printf("%d\n%d",b,c+1);
}