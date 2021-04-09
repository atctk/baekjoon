#include <stdio.h>

int main(void) {
	int input,a=0,ten,one,b=0,c=0;
	scanf("%d",&input);
	a=input;
	while(1)
	{
		if(a<10)
		{
			ten=0;
		}else{
			ten=a/10;
		}
		one=a%10;
		b=ten+one;
		c++;
		
		ten=a%10;
		one=b%10;
		a=(ten*10)+one;
		
		if(a==input)
		{
			break;
		}
	}
	printf("%d",c);
}