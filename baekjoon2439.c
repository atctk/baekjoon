#include <stdio.h>

int main(void) {
	int a,i,j;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			if(j<=a-i)
			{
				printf(" ");
			}else
			printf("*");
		}
		printf("\n");
	}
}