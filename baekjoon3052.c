#include <stdio.h> 
int main ()
{
    int i = 0;
    int a[10] = {0}; 
    int re; 
    int num[42] = {0}; 
    int c=0; 

    for (i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    for (i=0; i<10; i++){ 
        re = a[i] % 42; 
        num[re]++;  
        
    }
    for (i=0; i<42; i++){ 
        if (num[i] > 0){
            c++;
        }
    }

    printf("%d", c); 

    return 0;
}