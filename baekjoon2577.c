#include <stdio.h>

int main(void) {
	int a,b,c;
	int num[10]={0};
	scanf("%d\n%d\n%d",&a,&b,&c);
	int re=0;
	re=a*b*c;
	while (re > 0) {
        num[re % 10]++;
        re /= 10;
    }
    for (int i=0; i<10;i++) {
        printf("%d\n", num[i]);
    }
}