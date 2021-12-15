#include<stdio.h>

// Factorial code.
int Factorial(int x){
    if(x==0) return 1;
    else return x*Factorial(x-1);
}
// Driver code.
int main(){
    int x;
    printf("\n!... Factorial ...!\n");
    printf("\nEnter a number : ");
    scanf("%d",&x);
    printf("Factorial of "); printf("%d",x);
    printf(" is : %d", Factorial(x));
    printf("\n\n!!!... Thank you ...!!!\n");
    return 0;
}