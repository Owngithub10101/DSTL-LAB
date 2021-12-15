#include<stdio.h>    
int main()
{
    int i, n;
    int x = 0, y = 1, z;    
    printf("Enter the n of elements:");    
    scanf("%d", &n);    
    printf("\n%d %d", x, y);  
    for(i = 2; i < n; ++i)
    {    
        z = x + y;    
        printf(" %d",z);    
        x = y;    
        y = z;    
    }  
    return 0;  
}    