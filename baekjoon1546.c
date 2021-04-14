#include <stdio.h>
int main() {
    int num,i;
    double a[1000],max=0,avg=0,b[1000];
    scanf("%d", &num);
    for (i = 0; i < num; i++){
        scanf("%lf", &a[i]);
        if (max<a[i]){
            max=a[i];
        }
    }
    for (i=0;i<num;i++){
        b[i]=a[i]/max*100.0;
        avg+=b[i];
    }
    
    printf("%.2lf", (avg/(double)num));
    return 0;
}