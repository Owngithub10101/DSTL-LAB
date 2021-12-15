#include <stdio.h>

int main(){
    int x, y, i;
    printf("Enter Starting number: ");
    scanf("%d",&x);
    printf("Enter Ending number: ");
    scanf("%d",&y);
    printf("Number's are(In increasing order) : ");
    for(i = x; i <= y; i++){
        printf("%d ",i);
    }
    printf("\nNumber's are(In decreasing order) : ");
    for(i = y; i >= x; i--){
        printf("%d ",i);
    }
    printf("\nEven number's are : ");
    for(i = x; i <= y; i++){
        if(i%2 == 0) printf("%d ",i);
    }
    printf("\nOdd number's are : ");
    for(i = x; i <= y; i++){
        if(i%2 != 0) printf("%d ",i);
    }
    return 0;
}