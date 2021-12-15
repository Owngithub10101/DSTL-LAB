#include <stdio.h> 
#include <math.h> 

void printPowerSet(char *set, int set_size) 
{ 
    /*set_size of power set of a set with set_size 
      n is (2**n -1)*/
    int pow_set_size = pow(2, set_size); 
    int count, i; 
    printf("Number of Element in power set is : %d", pow_set_size);
    printf("\nAnd power set are : { ");
    for(count = 0; count < pow_set_size; count++) 
    { 
        printf("{");
        for(i = 0; i < set_size; i++) { 
          /* Check if ith bit in the count is set 
             If set then print ith element from set */
          if(count & (1<<i)) printf("%c", set[i]);
        } 
       printf("}");
       printf(" "); 
    } 
    printf("}");
} 
  
/*Driver program to test printPowerSet*/
int main() { 
    char set[] = {'1','2','3'}; 
    printPowerSet(set, 3); 
    return 0; 
}